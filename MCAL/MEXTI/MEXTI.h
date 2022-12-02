/*
 * interface.h
 *
 *  Created on: Oct 21, 2022
 *      Author: engineer
 */

#ifndef MCAL_MEXTI_INTERFACE_H_
#define MCAL_MEXTI_INTERFACE_H_
#include"MEXTI_reg.h"

#define sense_control_state  MEXTI_FALLING_EDGE
void MGIE_enable(void);
void MEXTI0_init();




void MEXIT_callback(void(*loc_Ptrtofun)(void));

#endif /* MCAL_MEXTI_INTERFACE_H_ */
