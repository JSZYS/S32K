/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : i2c1.h
**     Project     : s32k144_Demo_CAN
**     Processor   : S32K144_100
**     Component   : i2c_pal
**     Version     : Component SDK_S32K1xx_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K1xx_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-05-23, 00:24, # CodeGen: 0
**     Contents    :
**         I2C_MasterInit                - status_t I2C_MasterInit(const i2c_instance_t * const instance,i2c_master_t *...
**         I2C_MasterSendData            - status_t I2C_MasterSendData(const i2c_instance_t * const instance,void *...
**         I2C_MasterSendDataBlocking    - status_t I2C_MasterSendDataBlocking(const i2c_instance_t * const instance,...
**         I2C_MasterReceiveData         - status_t I2C_MasterReceiveData(const i2c_instance_t * const instance, uint8_t...
**         I2C_MasterReceiveDataBlocking - status_t I2C_MasterReceiveDataBlocking(const i2c_instance_t * const instance,...
**         I2C_MasterSetSlaveAddress     - status_t I2C_MasterSetSlaveAddress(const i2c_instance_t * const...
**         I2C_MasterGetTransferStatus   - status_t I2C_MasterGetTransferStatus(const i2c_instance_t * const...
**         I2C_MasterSetBaudRate         - status_t I2C_MasterSetBaudRate(const i2c_instance_t * const instance,...
**         I2C_MasterGetBaudRate         - status_t I2C_MasterGetBaudRate(const i2c_instance_t * const instance,...
**         I2C_MasterAbortTransfer       - status_t I2C_MasterAbortTransfer(const i2c_instance_t * const instance);
**         I2C_MasterDeinit              - status_t I2C_MasterDeinit(const i2c_instance_t * const instance);
**         I2C_GetDefaultMasterConfig    - status_t I2C_GetDefaultMasterConfig(i2c_master_t *config);
**         I2C_GetDefaultSlaveConfig     - status_t I2C_GetDefaultSlaveConfig(i2c_slave_t * config);
**         I2C_SlaveInit                 - status_t I2C_SlaveInit(const i2c_instance_t * const instance, i2c_slave_t...
**         I2C_SlaveSendData             - status_t I2C_SlaveSendData(const i2c_instance_t * const instance, const...
**         I2C_SlaveSendDataBlocking     - status_t I2C_SlaveSendDataBlocking(const i2c_instance_t * const instance,...
**         I2C_SlaveReceiveData          - status_t I2C_SlaveReceiveData(const i2c_instance_t * const instance, const...
**         I2C_SlaveReceiveDataBlocking  - status_t I2C_SlaveReceiveDataBlocking(const i2c_instance_t * const instance,...
**         I2C_SlaveSetRxBuffer          - status_t I2C_SlaveSetRxBuffer(const i2c_instance_t * const instance,uint8_t *...
**         I2C_SlaveSetTxBuffer          - status_t I2C_SlaveSetTxBuffer(const i2c_instance_t * const instance,uint8_t *...
**         I2C_SlaveDeinit               - status_t I2C_SlaveDeinit(const i2c_instance_t * const instance);
**         I2C_SlaveGetTransferStatus    - status_t I2C_SlaveGetTransferStatus(const i2c_instance_t * const...
**         I2C_SlaveAbortTransfer        - status_t I2C_SlaveAbortTransfer(const i2c_instance_t * const instance);
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file i2c1.h
** @version 01.00
*/         
/*!
**  @addtogroup i2c1_module i2c1 module documentation
**  @{
*/         
#ifndef i2c1_H
#define i2c1_H

/* MODULE i2c1. */
/* Include inherited beans */
#include "clockMan1.h"
#include "dmaController1.h"
#include "i2c_pal.h"

/*! @brief PAL instance information */
extern i2c_instance_t i2c1_instance;
/*! @brief Master module configurations */
extern const i2c_master_t i2c1_MasterConfig0;

  
#endif
/* ifndef __i2c1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/
