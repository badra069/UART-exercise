/*
 * keypad.h
 *
 *  Created on: Dec 27, 2019
 *      Author: badra069
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#include"micro_config.h"
#include"common_macros.h"
#include"std_types.h"

#define N_COL			4
#define N_ROW			4
#define KEYPAD_PORT_OUT PORTA
#define KEYPAD_PORT_IN	PINA
#define KEYPAD_PORT_DIR	DDRA
extern uint8 current_key;
/************************************************FUNCTIONS PROTOTYPES**********************************************/
void KEYPAD_init(void);
uint8 KEYPAD_getPressed(void);
#endif /* KEYPAD_H_ */
