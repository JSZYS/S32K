/*
 * 品智科技S32K144开发板
 * DEMO - CAN通讯实验
 * 实验现象:
 *		 KEY1按下后,CAN0总线发送msgid为0x01的报文
 *		 KEY1按下后,CAN1总线发送msgid为0x02的报文
 *		 KEY1按下后,CAN2总线发送msgid为0x03的报文
 *		 CAN0,1,2总线在中断接受报文后,通过串口显示接收的报文
 *
 *
 * 注1.s32k144系列支持3路CAN，CAN0可以配置为CANFD模式
 * 注2.本实验可以通过连接开发板上的CAN总线实现自身通讯,线材需要自备
 *
 * 注3.**CAN实验必须要12VDCin电源供电才可实现,USB供电达不到TJA1051T供电需求**
 *
 * IO配置
 * CAN0RX PTE4
 * CAN0TX PTE5
 * CAN1RX PTA12
 * CAN1TX PTA13
 * CAN2RX PTC16
 * CAN2TX PTC17
 * KEY1 PTC12
 * KEY2 PTC13
 * KEY3 PTB2
 * LED1 PTD16 FTM0_CH1
 * LED2 PTD15 FTM0_CH0
 * LED3 PTD1 FTM0_CH3 FTM2_CH16
 * LED4 PTD0 FTM0_CH2 FTM2_CH0
*/
#include "Cpu.h"
#include "delay.h"
#include "uart.h"
#include"key.h"
#include"oled.h"

#include <stddef.h>
#include <stdio.h>            /* This example main program uses printf/fflush */
#include "DBCResolver3.h"              /* Model header file */

  volatile int exit_code = 0;

#define LED1(x)  PINS_DRV_WritePin(PTD,16,!x);
#define LED2(x)  PINS_DRV_WritePin(PTD,15,!x);
#define LED3(x)  PINS_DRV_WritePin(PTD,1,!x);
#define LED4(x)  PINS_DRV_WritePin(PTD,0,!x);

#define Rx_Filter  0x0
char IRQ_CAN0_RX;
char IRQ_CAN1_RX;
char IRQ_CAN2_RX;
can_message_t recvMsg_CAN0;
can_message_t recvMsg_CAN1;
can_message_t recvMsg_CAN2;

#define RX_MAILBOX_CAN0  (0UL)
#define TX_MAILBOX_CAN0  (1UL)

#define RX_MAILBOX_CAN1  (2UL)
#define TX_MAILBOX_CAN1  (3UL)

#define RX_MAILBOX_CAN2  (4UL)
#define TX_MAILBOX_CAN2  (5UL)



/*CAN0回调函数*/
void CAN0_Callback_Func (uint32_t instance,can_event_t event,uint32_t buffIdx,void *flexcanState)
  {
	(void)flexcanState; //此处防止警报
	(void)instance;
	(void)buffIdx;
	CAN_Receive(&can_pal0_instance, RX_MAILBOX_CAN0, &recvMsg_CAN0); //接收报文并重新注册回调函数
	switch(event) //回调事件
		{
			case CAN_EVENT_RX_COMPLETE: //接收完成 事件
				IRQ_CAN0_RX =1;
				break;
			case CAN_EVENT_TX_COMPLETE: //发送完成事件
				break;
			default:
				break;
		}
  }



void CAN1_Callback_Func (uint32_t instance,can_event_t event,uint32_t buffIdx,void *flexcanState)
  {
	(void)flexcanState;
	(void)instance;
	(void)buffIdx;
	CAN_Receive(&can_pal1_instance, RX_MAILBOX_CAN1, &recvMsg_CAN1);
	switch(event)
		{
		case CAN_EVENT_RX_COMPLETE:
			IRQ_CAN1_RX =1;
			break;
		case CAN_EVENT_TX_COMPLETE:
			break;
		default:
			break;
		}
  }



void CAN2_Callback_Func (uint32_t instance,can_event_t event,uint32_t buffIdx,void *flexcanState)
  {
	(void)flexcanState;
	(void)instance;
	(void)buffIdx;
	CAN_Receive(&can_pal2_instance, RX_MAILBOX_CAN2, &recvMsg_CAN2);
	switch(event)
	{
		case CAN_EVENT_RX_COMPLETE:
			IRQ_CAN2_RX =1;
			break;
		case CAN_EVENT_TX_COMPLETE:
			break;
		default:
			break;
		}
  }


void CAN0_Init(void)
{
	  CAN_Init(&can_pal0_instance, &can_pal0_Config0);
	  can_buff_config_t Rx_buffCfg =  {
	      .enableFD = false,
	      .enableBRS = false,
	      .fdPadding = 0U,
	      .idType = CAN_MSG_ID_STD,
	      .isRemote = false
	  };

	  can_buff_config_t Tx_buffCfg =  {
	      .enableFD = false,
	      .enableBRS = false,
	      .fdPadding = 0U,
	      .idType = CAN_MSG_ID_STD,
	      .isRemote = false
	  };
	  CAN_ConfigRxBuff(&can_pal0_instance, RX_MAILBOX_CAN0, &Rx_buffCfg, Rx_Filter); //注册接收配置和MSGID过滤器(如过滤器配置为0x1，则只接受msgid 0x1发来的报文)
	  CAN_ConfigTxBuff(&can_pal0_instance, TX_MAILBOX_CAN0, &Tx_buffCfg); //配置发送
	  /*设置MSGID的掩码，掩码粗略可以理解为对11bit MSGID地址的过滤
	   如果某bit位需要过滤设置为1,不过滤设置为0,例如掩码设置为0x7ff则过滤全部标准id,如果设置为0x7fe,这只能接受0x01的报文(不存在0x0的地址)*/
	  CAN_SetRxFilter(&can_pal0_instance,CAN_MSG_ID_STD,RX_MAILBOX_CAN0,0); //设置MSGID掩码，
	  CAN_InstallEventCallback(&can_pal0_instance,&CAN0_Callback_Func,(void*)0); //注册回调函数
	  CAN_Receive(&can_pal0_instance, RX_MAILBOX_CAN0, &recvMsg_CAN0); //*****重点****此函数不只有接收作用 还有续订回调函数的作用.
}



void CAN1_Init(void)
{
	  CAN_Init(&can_pal1_instance, &can_pal0_Config0);
	  can_buff_config_t Rx_buffCfg =  {
	      .enableFD = false,
	      .enableBRS = false,
	      .fdPadding = 0U,
	      .idType = CAN_MSG_ID_STD,
	      .isRemote = false
	  };

	  can_buff_config_t Tx_buffCfg =  {
	      .enableFD = false,
	      .enableBRS = false,
	      .fdPadding = 0U,
	      .idType = CAN_MSG_ID_STD,
	      .isRemote = false
	  };
	  CAN_ConfigRxBuff(&can_pal1_instance, RX_MAILBOX_CAN1, &Rx_buffCfg, Rx_Filter);
	  CAN_ConfigTxBuff(&can_pal1_instance, TX_MAILBOX_CAN1, &Tx_buffCfg);
	  CAN_SetRxFilter(&can_pal1_instance,CAN_MSG_ID_STD,RX_MAILBOX_CAN1,0);
	  CAN_InstallEventCallback(&can_pal1_instance,&CAN1_Callback_Func,(void*)0);
	  CAN_Receive(&can_pal1_instance, RX_MAILBOX_CAN1, &recvMsg_CAN1);
}





void CAN2_Init(void)
{
	  CAN_Init(&can_pal2_instance, &can_pal1_Config0);
	  can_buff_config_t Rx_buffCfg =  {
	      .enableFD = false,
	      .enableBRS = false,
	      .fdPadding = 0U,
	      .idType = CAN_MSG_ID_STD,
	      .isRemote = false
	  };

	  can_buff_config_t Tx_buffCfg =  {
	      .enableFD = false,
	      .enableBRS = false,
	      .fdPadding = 0U,
	      .idType = CAN_MSG_ID_STD,
	      .isRemote = false
	  };
	  CAN_ConfigRxBuff(&can_pal2_instance, RX_MAILBOX_CAN2, &Rx_buffCfg, Rx_Filter);
	  CAN_ConfigTxBuff(&can_pal2_instance, TX_MAILBOX_CAN2, &Tx_buffCfg);
	  CAN_SetRxFilter(&can_pal2_instance,CAN_MSG_ID_STD,RX_MAILBOX_CAN2,0);
	  CAN_InstallEventCallback(&can_pal2_instance,&CAN2_Callback_Func,(void*)0);
	  CAN_Receive(&can_pal2_instance, RX_MAILBOX_CAN2, &recvMsg_CAN2);
}



int main(void)
{
  /* Write your local variable definition here */
	uint8_t pinstate;
	int MCU_Freq;
	uint8_t CANRXDATA_STR1[17];
	uint8_t CANRXDATA_STR2[17];
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  #ifdef PEX_RTOS_INIT
    PEX_RTOS_INIT();                   /* Initialization of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of Processor Expert internal initialization.                    ***/

	CLOCK_SYS_Init(g_clockManConfigsArr, CLOCK_MANAGER_CONFIG_CNT,g_clockManCallbacksArr, CLOCK_MANAGER_CALLBACK_CNT);
	CLOCK_SYS_UpdateConfiguration(0U, CLOCK_MANAGER_POLICY_AGREEMENT);
	MCU_Freq = delay_init();//初始化delay函数
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS, g_pin_mux_InitConfigArr); //初始化IO
	I2C_MasterInit(&i2c1_instance, &i2c1_MasterConfig0);//初始化I2C外设,用于OLED通讯
	LPUART_DRV_Init(INST_LPUART1, &lpuart1_State, &lpuart1_InitConfig0); //初始化串口

	CAN0_Init();
	CAN1_Init();
	CAN2_Init();
    PC2DLL_Interface3_initialize();

    u1_printf("Warning: The simulation will run forever. "
            "Generated ERT main won't simulate model step behavior. "
            "To change this behavior select the 'MAT-file logging' option.\n");
    fflush((NULL));
	oled_init(); //OLED配置参数初始化
	OLED_TITLE((uint8_t*)"S32K144",(uint8_t*)" CAN");//OLED显示标题
	u1_printf("初始化完毕,MCU运行频率为 %d Mhz \r\n",MCU_Freq);


    PC2DLL_Interface3_initialize();

    u1_printf("Warning: The simulation will run forever. "
            "Generated ERT main won't simulate model step behavior. "
            "To change this behavior select the 'MAT-file logging' option.\n");
    fflush((NULL));
    while (rtmGetErrorStatus(DBCResolver3_M) == (NULL)) {
      /*  Perform application tasks here */
    }

    while(1)
    {
		/*按键处理*/
			pinstate = KEY_Proc (0);
			if(pinstate ==BTN1_PRES )
			{
				can_message_t Tx_msg = {
							 .cs = 0U,
							 .id = 0x01,
							 .data[0] = 0x0,
							 .data[1] = 0x1,
							 .data[2] = 0x2,
							 .data[3] = 0x3,
							 .data[4] = 0x4,
							 .data[5] = 0x5,
							 .data[6] = 0x6,
							 .data[7] = 0x7,
							 .length = 8
						 };
				CAN_Send(&can_pal0_instance, TX_MAILBOX_CAN0, &Tx_msg);
				u1_printf("CAN0发送报文\r\n");

			}
			else if(pinstate ==BTN2_PRES )
			{
				can_message_t Tx_msg = {
							.cs = 0U,
							.id = 0x02,
							.data[0] = 0x20,
							.data[1] = 0x21,
							.data[2] = 0x22,
							.data[3] = 0x23,
							.data[4] = 0x24,
							.data[5] = 0x25,
							.data[6] = 0x26,
							.data[7] = 0x27,
							.length = 8
						 };
				CAN_Send(&can_pal1_instance, TX_MAILBOX_CAN1, &Tx_msg);
				u1_printf("CAN1发送报文\r\n");
		}
			else if(pinstate ==BTN3_PRES )
			{
				can_message_t Tx_msg = {
							 .cs = 0U,
							 .id = 0x03,
							 .data[0] = 0x30,
							 .data[1] = 0x31,
							 .data[2] = 0x32,
							 .data[3] = 0x33,
							 .data[4] = 0x34,
							 .data[5] = 0x35,
							 .data[6] = 0x36,
							 .data[7] = 0x37,
							 .length = 8
						 };
				CAN_Send(&can_pal2_instance, TX_MAILBOX_CAN2, &Tx_msg);
				u1_printf("CAN2发送报文\r\n");
			}

			if (IRQ_CAN0_RX ==1)
			 {
				 int i;
				 u1_printf("CAN0 RECV ID:0x%x \r\n",recvMsg_CAN0.id);
				 for(i=0; i<recvMsg_CAN0.length;i++)
				 {
					 u1_printf("Data %d : %x\r\n",i,recvMsg_CAN0.data[i]);
					 if(i==recvMsg_CAN0.length-1) u1_printf("***************\r\n");
				 }
				 IRQ_CAN0_RX=0;
			 }

			if (IRQ_CAN1_RX ==1)
			 {
				 int i;
				 u1_printf("CAN1 RECV  ID:0x%x \r\n",recvMsg_CAN1.id);
				 for(i=0; i<recvMsg_CAN1.length;i++)
				 {
					 u1_printf("Data %d : %x\r\n",i,recvMsg_CAN1.data[i]);
					 if(i==recvMsg_CAN1.length-1) u1_printf("***************\r\n");
				 }
				 IRQ_CAN1_RX=0;
			 }

			if (IRQ_CAN2_RX ==1)
			 {
				 int i;
				 u1_printf("CAN2 RECV  ID:0x%x \r\n",recvMsg_CAN2.id);
				 for(i=0; i<recvMsg_CAN2.length;i++)
				 {
					 u1_printf("Data %d : %x\r\n",i,recvMsg_CAN2.data[i]);
					 if(i==recvMsg_CAN2.length-1) u1_printf("***************\r\n");
				 }
				 IRQ_CAN2_RX=0;
			 }
			/*OLED显示*/
			sprintf((char*)CANRXDATA_STR1,"CAN0 %02X %02X %02X %02X",recvMsg_CAN0.data[0],recvMsg_CAN0.data[1],recvMsg_CAN0.data[2],recvMsg_CAN0.data[3]);
			sprintf((char*)CANRXDATA_STR2,"ID%02X %02X %02X %02X %02X",(uint8_t)recvMsg_CAN0.id,recvMsg_CAN0.data[4],recvMsg_CAN0.data[5],recvMsg_CAN0.data[6],recvMsg_CAN0.data[7]);
			OLED_ShowString(0,2,CANRXDATA_STR1,8,0);
			OLED_ShowString(0,3,CANRXDATA_STR2,8,0);

			sprintf((char*)CANRXDATA_STR1,"CAN1 %02X %02X %02X %02X",recvMsg_CAN1.data[0],recvMsg_CAN1.data[1],recvMsg_CAN1.data[2],recvMsg_CAN1.data[3]);
			sprintf((char*)CANRXDATA_STR2,"ID%02X %02X %02X %02X %02X",(uint8_t)recvMsg_CAN1.id,recvMsg_CAN1.data[4],recvMsg_CAN1.data[5],recvMsg_CAN1.data[6],recvMsg_CAN1.data[7]);
			OLED_ShowString(0,4,CANRXDATA_STR1,8,0);
			OLED_ShowString(0,5,CANRXDATA_STR2,8,0);

			sprintf((char*)CANRXDATA_STR1,"CAN2 %02X %02X %02X %02X",recvMsg_CAN2.data[0],recvMsg_CAN2.data[1],recvMsg_CAN2.data[2],recvMsg_CAN2.data[3]);
			sprintf((char*)CANRXDATA_STR2,"ID%02X %02X %02X %02X %02X",(uint8_t)recvMsg_CAN2.id,recvMsg_CAN2.data[4],recvMsg_CAN2.data[5],recvMsg_CAN2.data[6],recvMsg_CAN2.data[7]);
			OLED_ShowString(0,6,CANRXDATA_STR1,8,0);
			OLED_ShowString(0,7,CANRXDATA_STR2,8,0);
			/*OLED显示*/

			PINS_DRV_TogglePins(PTD, 1 << 0);
			PINS_DRV_TogglePins(PTD, 1 << 1);
			PINS_DRV_TogglePins(PTD, 1 << 15);
			PINS_DRV_TogglePins(PTD, 1 << 16);
		//	rt_OneStep();
			delay_ms(100);
    }
  /*** Don't write any code pass th5is line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;) {
    if(exit_code != 0) {
      break;
    }
  }
  return exit_code;
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP S32K series of microcontrollers.
**
** ###################################################################
*/
