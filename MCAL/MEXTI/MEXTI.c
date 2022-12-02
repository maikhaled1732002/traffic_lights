/*
 * programe.c
 *
 *  Created on: Oct 21, 2022
 *      Author: engineer
 */
/*
 *
 * */
#include "../../library/BIT_MATH.h"
#include "../../library/STD_TYPES.h"
#include "../../MCAL/mdio/mdio.h"
#include"../MEXTI/MEXTI_reg.h"

#define sense_control_state  MEXTI_FALLING_EDGE
void (*Gptr)(void)=NULL;

void MEXIT_callback(void(loc_Ptrtofun)(void)){
	if(loc_Ptrtofun!=NULL){
		Gptr=loc_Ptrtofun;
	}

}
void __vector_1(void) __attribute__((signal));
void __vector_1(void){
	if(Gptr!=NULL){


		Gptr();
}
}
void MGIE_enable(void){

	SET_BIT(SREG,7 );



}

void MEXTI0_init(){
 if (	sense_control_state == MEXTI_FALLING_EDGE)
	{	SET_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);}
	else if ( sense_control_state  ==MEXTI_LOW_LEVEL)

	{CLR_BIT(MCUCR,0);
	CLR_BIT(MCUCR,1);}
	else if (	sense_control_state == MEXTI_ANY_LOGICAL_LEVEL)
	{
		SET_BIT(MCUCR,0);
		CLR_BIT(MCUCR,1);}
	else if (	sense_control_state == MEXTI_RISING_EDGE)
	{	CLR_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);}
 SET_BIT(GICR,6);
}



