/*
 * led.h
 *
 *  Created on: Nov 12, 2022
 *      Author: engineer
 */
#include "../../library/STD_TYPES.h"
#include "../../MCAL/mdio/mdio.h"
#include "../../MCAL/MEXTI/MEXTI.h"
#include "../../MCAL/timers/timer.h"

#ifndef HAL_LED_H_
#define HAL_LED_H_
#define error    1
#define ok       0
u8 led_init(u8 bin_no,u8 port_no ,u8 dir );
u8 led_toggle (u8 bin_no,u8 port_no);

u8 set_led_value(u8 bin_no,u8 port_no ,u8 dir );
u8 get_led_value (u8 bin_no,u8 port_no, u8 *led_reading );
#endif /* HAL_LED_H_ */
