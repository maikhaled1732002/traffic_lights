/*
 * header.h
 *
 *  Created on: Sep 23, 2022
 *      Author: engineer
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define  SET_BIT(REG,BIT)    REG|=(1<<BIT)
 #define GET_BIT(REG,BIT)     ((REG>>BIT) & 1)
 #define CLR_BIT(REG,BIT)     REG&=~(1<<BIT)

#define TOGGLE_BIT(REG,BIT)    REG^=(1<<BIT)
#define IS_HIGH(REG,N) 	 (((REG)>>(N))&1)
 #define IS_LOW(REG,N)	 (!(((REG)>>(N))&1))
#endif /* BIT_MATH_H_ */
