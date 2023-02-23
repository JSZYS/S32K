/*
 * 品智科技S32K144 GPIO demo
 *
 * KEY1 PTC12 高电平触发
 * KEY2 PTC13 高电平触发
 * KEY3 PTB2 高电平触发
 * LED1 PTD16 FTM0_CH1 低电平点亮
 * LED2 PTD15 FTM0_CH0 低电平点亮
 * LED3 PTD1 FTM0_CH3 FTM2_CH16 低电平点亮
 * LED4 PTD0 FTM0_CH2 FTM2_CH0 低电平点亮
 *
 * 实验现象 按键按下后 对应的LED点亮
 *
 * */



#include "S32K144.h"
#include "clocks_and_modes.h"






void port_init(void)
{
    /*使能端口外设时钟*/
    PCC->PCCn[PCC_PORTA_INDEX] |= PCC_PCCn_CGC_MASK; // Enable clock for PORTA
    PCC->PCCn[PCC_PORTB_INDEX] |= PCC_PCCn_CGC_MASK; // Enable clock for PORTB
    PCC->PCCn[PCC_PORTC_INDEX] |= PCC_PCCn_CGC_MASK; // Enable clock for PORTC
    PCC->PCCn[PCC_PORTD_INDEX] |= PCC_PCCn_CGC_MASK; // Enable clock for PORTD
    PCC->PCCn[PCC_PORTE_INDEX] |= PCC_PCCn_CGC_MASK; // Enable clock for PORTE

    /*配置LED为输出模式 低电平触发.
     * PTD0  LED4
     * PTD1  LED3
     * PTD15 LED2
     * PTD16 LED1
     * */
    PTD->PDDR |= 1 << 0;          // Port D0: Data Direction = output
    PTD->PDDR |= 1 << 1;          // Port D1: Data Direction = output
    PTD->PDDR |= 1 << 15;          // Port D15: Data Direction = output
    PTD->PDDR |= 1 << 16;          // Port D16: Data Direction = output

    PORTD->PCR[0] = 0x00000100;   // Port D0: MUX = ALT1, GPIO
    PORTD->PCR[1] = 0x00000100;   // Port D1: MUX = ALT1, GPIO
    PORTD->PCR[15] = 0x00000100;   // Port D15: MUX = ALT1, GPIO
    PORTD->PCR[16] = 0x00000100;   // Port D16: MUX = ALT1, GPIO


    /*配置按键为输入模式 高电平触发.
     * PTC12  KEY1
     * PTC13  KEY2
     * PTB2   KEY3
     * */
    PTC->PDDR &= ~(1 << 12);      // Port C12: Data Direction= input
    PTC->PDDR &= ~(1 << 13);      // Port C13: Data Direction= input
    PTB->PDDR &= ~(1 << 2);      // Port B2: Data Direction= input

    PORTC->PCR[12] = 0x00000110;  // Port C12: MUX = ALT1, input filter enabled
    PORTC->PCR[13] = 0x00000110;  // Port C13: MUX = ALT1, input filter enabled
    PORTB->PCR[2]  = 0x00000110;  // Port B2: MUX = ALT1, input filter enabled
}




int main(void)
{

    uint8_t KEY1;
    uint8_t KEY2;
    uint8_t KEY3;

   SOSC_init_8MHz();        // Initialize system oscilator for 8 MHz xtal
   SPLL_init_160MHz();      // Initialize SPLL to 160 MHz with 8 MHz SOSC
   NormalRUNmode_80MHz();   // Init clocks: 80 MHz sysclk & core, 40 MHz bus, 20 MHz flash

    port_init();

    // 在相应的GPIO管脚清除即输出低电平，LED全亮
    PTD->PCOR |= 1 << 0;
    PTD->PCOR |= 1 << 1;
    PTD->PCOR |= 1 << 15;
    PTD->PCOR |= 1 << 16;


    while (1)
    {
        KEY1 = (PTC->PDIR >> 12) & 0x01;
        KEY2 = (PTC->PDIR >> 13) & 0x01;
        KEY3 = (PTB->PDIR >> 2) & 0x01;

        if (KEY1 == 1)
        {
            PTD->PCOR |= 1 << 0;
        }
        else
        {
            PTD->PSOR |= 1 << 0;
        }

        if (KEY2 == 1)
        {
            PTD->PCOR |= 1 << 1;
        }
        else
        {
            PTD->PSOR |= 1 << 1;
        }

        if (KEY3 == 1)
        {
            PTD->PCOR |= 1 << 15;
        }
        else
        {
            PTD->PSOR |= 1 << 15;
        }

        PTD->PTOR |= 1 << 16;


    }

}


