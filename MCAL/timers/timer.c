/*
 * programe_timer.c
 *
 *  Created on: Oct 28, 2022
 *      Author: engineer
 */
#include "../../library/STD_TYPES.h"
#include"timer.h"
#include "../../library/BIT_MATH.h"

#include "../../MCAL/mdio/mdio.h"
#include "config_timer.h"
#include "reg_timer.h"






void timer_start(void){
//set prescalar
#if CLK_SOURCE_MODE==NO_CLK_SOURCE
CLR_BIT(TCCR0,0);
CLR_BIT(TCCR0,1);
CLR_BIT(TCCR0,2);
#elif CLK_SOURCE_MODE==SYSTEM_CLK
SET_BIT(TCCR0,0);
CLR_BIT(TCCR0,1);
CLR_BIT(TCCR0,2);
#elif CLK_SOURCE_MODE==PRESCALAR_OVER_8
CLR_BIT(TCCR0,0);
SET_BIT(TCCR0,1);
CLR_BIT(TCCR0,2);
#elif CLK_SOURCE_MODE==PRESCALAR_OVER_64
SET_BIT(TCCR0,0);
SET_BIT(TCCR0,1);
CLR_BIT(TCCR0,2);
#elif CLK_SOURCE_MODE==PRESCALAR_OVER_256
CLR_BIT(TCCR0,0);
CLR_BIT(TCCR0,1);
SET_BIT(TCCR0,2);
#elif CLK_SOURCE_MODE==PRESCALAR_OVER_1024
SET_BIT(TCCR0,0);
CLR_BIT(TCCR0,1);
SET_BIT(TCCR0,2);
#elif CLK_SOURCE_MODE==PRESCALAR_OVER_FALLING_EDGE
CLR_BIT(TCCR0,0);
SET_BIT(TCCR0,1);
SET_BIT(TCCR0,2);
#elif CLK_SOURCE_MODE==PRESCALAR_OVER_RISING_EDGE
SET_BIT(TCCR0,0);
SET_BIT(TCCR0,1);
SET_BIT(TCCR0,2);
#endif

}



void timer_init(){

//SETMODE OF TIMER
#if TIMER0_MODE ==TIMER_NORMAL_MODE
CLR_BIT(TCCR0,3);
CLR_BIT(TCCR0,6);
//set interrupt state
#if TIMER0_NORMAL_MODE_INTERRUPT == NORMAL_INTERRUPT_DISENABLED
CLR_BIT(TIMSK,0);

#elif TIMER0_NORMAL_MODE_INTERRUPT ==   NORMAL_INTERRUPT_ENABLED
SET_BIT(TIMSK,0);
#endif


#elif TIMER0_MODE ==TIMER_CTC_MODE

SET_BIT(TCCR0,3);
CLR_BIT(TCCR0,6);
//set interrupt state
#if TIMER0_CTC_MODE_INTERRUPT ==CTC_INTERRUPT_DISENABLED
CLR_BIT(TIMSK,1);

#elif TIMER0_CTC_MODE_INTERRUPT  == CTC_INTERRUPT_ENABLED
SET_BIT(TIMSK,1);
#endif


#error"wrong mode chosen"
#endif
}




void timer0_stop(void){
	 TCCR0 &=(0b11111000);//stop timer
}
void delay_by_ovf(u8 no_of_sec){
	u16 counter=0 ;
	timer_start();
	//timer_init( );//start timer
	TCNT0 =0;
	while (counter<(61*no_of_sec))
	{
	while ((TIFR &(1<<0)) ==0);//loop untile flage is one this means ovf
	SET_BIT(TIFR,0);// clear flag by settig bet
	TCNT0 =0;
	counter++;//one ovf

}
	timer0_stop();
	//TCCR0=0;
	counter=0;



}




