/*
 * app.h
 *
 *  Created on: Nov 14, 2022
 *      Author: engineer
 */

#ifndef APP_APP_H_
#define APP_APP_H_
#include"../HAL/led/led.h"
#include"../HAL/buttom/buttom.h"
#include "../library/BIT_MATH.h"
#include "../library/STD_TYPES.h"



void app_init(void);
void normal_mode(void);
 void pedestrian_mode(void);

#endif /* APP_APP_H_ */
