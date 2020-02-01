/******************************************************************************
 *
 * Module: uart , keypad , lcd
 *
 * File Name: application.h
 *
 * Description: application file
 *
 * Author: Ahmed Mohamed
 *
 *******************************************************************************/
/*********************************************************************************
 * 									Drivers										 *
 *********************************************************************************/
#include"keypad.h"
#include"lcd.h"
#include"uart.h"
#define MC2_READY 0x01
#define MC1_READY 0x02

void Mc2_init(void)
{
	/**************************************************
	 * [name] : UART_ConfigType
	 * [Type] : Structure
	 * [Function] : UART Module Dynamic configuration
	 * [Members] :
	 * 			Parity_enable enable or disable
	 * 			Parity_type odd disable or even
	 * 			stop_bit 1 or 2
	 * 			character_size 5,6,7,8bits char
	 * 			speed x or U2x
	 * 			type  Sync or Async
	 ***************************************************/

	UART_ConfigType UART_configStruct = {	UART_PARITY_BIT_DISABLE ,
											UART_PARITY_DISABLE ,
											UART_1_STOP_BIT ,
											UART_8_BIT ,
											UART_2X ,
											UART_ASYNCHRONOUS_OPERATION ,};

	UART_init(&UART_configStruct);
}

int main(void)
{
	/*initializaiton code*/
	Mc2_init();
	uint8 str[20] = "I am micro 1#";
	while(UART_receiveByte() != MC2_READY){}
	UART_sendString(str);
	while(TRUE)
	{
		/* application code */
	}
}
