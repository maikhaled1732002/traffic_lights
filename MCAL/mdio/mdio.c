/*
 * mdio_programe.c
 *
 *  Created on: Sep 24, 2022
 *      Author: engineer
 */

#include "../../library/BIT_MATH.h"
#include "../../library/STD_TYPES.h"
#include "mdio.h"
#include "mdio_reg.h"




u8 mdio_setbinvalue (u8 copy_u8binnumber,u8 copy_u8portnumber, u8 copy_u8binvalue){

	switch( copy_u8portnumber){
		case MDIO_PORTA :
		if(copy_u8binvalue == BIN_HIGH){
		SET_BIT(PORTA,copy_u8binnumber);}
		else {
			CLR_BIT(PORTA,copy_u8binnumber) ;
		}
		break;
		case MDIO_PORTB :
			if (copy_u8binvalue==BIN_HIGH){
				SET_BIT(PORTB,copy_u8binnumber);}
			else {
				CLR_BIT(PORTB,copy_u8binnumber) ;
			}
		break;

		case MDIO_PORTC:
			if (copy_u8binvalue==BIN_HIGH)
				{SET_BIT(PORTC,copy_u8binnumber);}
			else {CLR_BIT(PORTC,copy_u8binnumber) ;}
		break;
		case MDIO_PORTD:
			if (copy_u8binvalue==BIN_HIGH)
				{SET_BIT(PORTD,copy_u8binnumber);}
			else {
				CLR_BIT(PORTD,copy_u8binnumber) ;
			}
		break;
	}


	if (1 ){
				return ok;
			}
			else {
				return error;
			}
}


u8  mdio_Readbin  (u8 copy_u8binnumber,u8 copy_u8portnumber, u8 * p_u8portreading ){


	switch(copy_u8portnumber)
	{case MDIO_PORTA:*p_u8portreading=GET_BIT(PINA,copy_u8binnumber);
		break;

	case MDIO_PORTB:*p_u8portreading=GET_BIT(PINB,copy_u8binnumber);

			break;

	case MDIO_PORTC:*p_u8portreading=GET_BIT(PINC,copy_u8binnumber);
			break;

	case MDIO_PORTD:*p_u8portreading=GET_BIT(PIND,copy_u8binnumber);
			break;

	default :

		break;


}


	if (1 ){
				return ok;
			}
			else {
				return error;
			}
}
u8 mdio_togglepin(u8 copy_u8binnumber,u8 copy_u8portnumber ){

	switch(copy_u8portnumber)
	{case MDIO_PORTA:TOGGLE_BIT(PORTA,copy_u8binnumber);
		break;

	case MDIO_PORTB:TOGGLE_BIT(PORTB,copy_u8binnumber);
			break;

	case MDIO_PORTC:TOGGLE_BIT(PORTC,copy_u8binnumber);
			break;

	case MDIO_PORTD:TOGGLE_BIT(PORTD,copy_u8binnumber);
			break;

	default :

		break;


}
	if (1 ){
				return ok;
			}
			else {
				return error;
			}
}

u8 mdio_setbindirection (u8 copy_u8binnumber,u8 copy_u8portnumber, u8 copy_u8bindir){

 	switch(copy_u8portnumber)
 	{case MDIO_PORTA:
 		if (copy_u8bindir==BIN_OUTPUT) {SET_BIT(DDRA,copy_u8binnumber) ;}
 		else if (copy_u8bindir==BIN_INPUT){CLR_BIT(DDRA,copy_u8binnumber);}

 		break;

 	case MDIO_PORTB:
 			if (copy_u8bindir==BIN_OUTPUT) {SET_BIT(DDRB,copy_u8binnumber) ;}
 			else if (copy_u8bindir==BIN_INPUT){CLR_BIT(DDRB,copy_u8binnumber);}

 			break;

 	case MDIO_PORTC:
 			if (copy_u8bindir==BIN_OUTPUT) {SET_BIT(DDRC,copy_u8binnumber) ;}
 			else if (copy_u8bindir==BIN_INPUT){CLR_BIT(DDRC,copy_u8binnumber);}

 			break;

 	case MDIO_PORTD:
 			if (copy_u8bindir==BIN_OUTPUT) {SET_BIT(DDRD,copy_u8binnumber) ;}
 			else if (copy_u8bindir==BIN_INPUT){CLR_BIT(DDRD,copy_u8binnumber);}

 			break;

 	default :

 		break;


 }

 	if (1 ){
 				return ok;
 			}
 			else {
 				return error;
 			}
 }

