 /*
 * app.c
 *
 *  Created on: Nov 8, 2022
 *      Author: engineer
 */

#include"app/app.h"

//test buttom driver

  //buttom_init_dir(PIN0, MDIO_PORTA,  BIN_INPUT);
// activate_pull_up ( PIN0, MDIO_PORTA, BIN_HIGH);

//test mdio driver
/*
 mdio_setbindirection ( PIN0, MDIO_PORTA, BIN_HIGH);

mdio_setbinvalue (PIN0, MDIO_PORTA, BIN_HIGH)

// mdio_Readbin  ( PIN0, MDIO_PORTA,&led_reading);
 mdio_togglepin (PIN0, MDIO_PORTA);
//
//u8 led_reading;
//test driver function
//set_led_value (PIN0, MDIO_PORTA, BIN_HIGH);
 * led_toggle (PIN0, MDIO_PORTA);
 * led_init (PIN0,MDIO_PORTA, BIN_OUTPUT );
// * get_led_value (PIN0, MDIO_PORTA,&led_reading );
 *
 */
//test timer  fun
 /*
  * timer_init();
 timer_start(void);
  * delay_by_ovf(5);
  * set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
	set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 1);
  * timer0_stop();

  */
//test interupt
/*led_togglell (void){
	 led_toggle (PIN0, MDIO_PORTA);
 }
 * MEXTI0_init();
 *  MEXIT_callback(led_togglell);
 *
 */

int main(void){

	 app_init();



	return 0;
}

