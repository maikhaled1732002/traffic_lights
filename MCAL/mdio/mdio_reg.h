/*
 * mdio_private.h
 *
 *  Created on: Sep 24, 2022
 *      Author: engineer
 */

#ifndef MDIO_MDIO_PRIVATE_H_
#define MDIO_MDIO_PRIVATE_H_
/*putting addreses*/
#define   DDRA  *((volatile u8*)0x3A)
#define   PORTA  *((volatile u8*) 0x3B)
#define   PINA  *((volatile u8*) 0x39)

#define   DDRB  *((volatile u8*)0x37)
#define   PINB *((volatile u8*) 0x36)
#define   PORTB  *((volatile u8*) 0x38)

#define   DDRC  *((volatile u8*)0x34)
#define   PORTC  *((volatile u8*) 0x35)
#define   PINC  *((volatile u8*) 0x33)

#define   DDRD  *((volatile u8*)0x31)
#define   PORTD  *((volatile u8*) 0x32)
#define   PIND  *((volatile u8*) 0x30)



#endif /* MDIO_MDIO_PRIVATE_H_ */
