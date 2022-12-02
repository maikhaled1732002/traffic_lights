/*
 * mido_interface.h
 *
 *  Created on: Sep 24, 2022
 *      Author: engineer
 */

#ifndef MDIO_MDIO_INTERFACE_H_
#define MDIO_MDIO_INTERFACE_H_
#include "../../library/STD_TYPES.h"
#define error    1
#define ok       0
/*putting descriptive names for different objects */
#define MDIO_PORTA   0
#define MDIO_PORTB   1
#define MDIO_PORTC   2
#define MDIO_PORTD   3



#define  BIN_OUTPUT   1
#define  BIN_INPUT    0



#define BIN_HIGH    1
#define BIN_LOW     0

#define NULL      0

# define PIN0   0
# define PIN1     1
# define PIN2      2
# define PIN3        3
# define PIN4       4
# define  PIN5     5
# define   PIN6     6
# define   PIN7     7



/*function prototypes*/


u8 mdio_setbindirection (u8 copy_u8binnumber,u8 copy_u8portnumber, u8 copy_u8bindir);

u8 mdio_setbinvalue (u8 copy_u8binnumber,u8 copy_u8portnumber, u8 copy_u8binvalue);

u8 mdio_Readbin  (u8 copy_u8binnumber,u8 copy_u8portnumber, u8 *p_u8portreading );
u8 mdio_togglepin (u8 copy_u8binnumber,u8 copy_u8portnumber );



#endif /* MDIO_MDIO_INTERFACE_H_ */
