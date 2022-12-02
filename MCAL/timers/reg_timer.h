/*
 * private_timer.h
 *
 *  Created on: Oct 28, 2022
 *      Author: engineer
 */

#ifndef MCAL_TIMERS_PRIVATE_TIMER_H_
#define MCAL_TIMERS_PRIVATE_TIMER_H_

#define TIMSK   *((volatile u8*)0x59)
#define TIFR   *((volatile u8*)0x58)
#define TCNT0   *((volatile u8*)0x52)
#define TCCR0   *((volatile u8*)0x53)
#define OCR0   *((volatile u8*)0x5C)




# define TIMER_NORMAL_MODE               0

#define TIMER_CTC_MODE                   1





  #define NO_CLK_SOURCE                    0
  #define  SYSTEM_CLK                      1
 #define PRESCALAR_OVER_8                  2
  #define  PRESCALAR_OVER_64               3
  #define  PRESCALAR_OVER_256              4
  #define PRESCALAR_OVER_1024              5
  #define   PRESCALAR_OVER_FALLING_EDGE    6
  #define   PRESCALAR_OVER_RISING_EDGE     7

#define    NORMAL_INTERRUPT_ENABLED         0
#define    NORMAL_INTERRUPT_DISENABLED      1

#define  CTC_INTERRUPT_ENABLED               0
#define   CTC_INTERRUPT_DISENABLED            1





#endif /* MCAL_TIMERS_PRIVATE_TIMER_H_ */
