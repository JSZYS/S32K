/*
 * LPUART.h
 *
 *  Created on: Mar 17, 2016
 *      Author: B46911
 */

#ifndef LPUART_H_
#define LPUART_H_

void LPUART1_init(void);
void LPUART1_transmit_char(char send);
void LPUART1_transmit_string(char data_string[]);
char LPUART1_receive_char(void);
void LPUART1_receive_and_echo_char(void);
void u1_printf(char* fmt,...);
void LPUART1_transmit(const uint8_t * txBuff, uint8_t lens);
#endif /* LPUART_H_ */
