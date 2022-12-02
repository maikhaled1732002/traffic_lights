/*
 * interface_timer.h
 *
 *  Created on: Oct 28, 2022
 *      Author: engineer
 */

#ifndef MCAL_TIMERS_INTERFACE_TIMER_H_
#define MCAL_TIMERS_INTERFACE_TIMER_H_
#include "../../library/STD_TYPES.h"
/*fun prototypes*/
void timer_init();
void timer_start(void);
void timer0_stop(void);
void delay_by_ovf(u8 no_of_sec);
#endif /* MCAL_TIMERS_INTERFACE_TIMER_H_ */
