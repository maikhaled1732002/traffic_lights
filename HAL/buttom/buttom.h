/*
 * buttom.h
 *
 *  Created on: Nov 14, 2022
 *      Author: engineer
 */

#ifndef HAL_BUTTOM_BUTTOM_H_
#define HAL_BUTTOM_BUTTOM_H_
#define error    1
#define ok       0
#include "../../library/STD_TYPES.h"
#include "../../MCAL/mdio/mdio.h"
u8 buttom_init_dir(u8 PIN, u8 PORT,  u8 dir);
u8 activate_pull_up ( u8 PIN, u8 PORT, u8 BIN_val);




#endif /* HAL_BUTTOM_BUTTOM_H_ */
