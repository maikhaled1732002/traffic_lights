/*
 * app.c
 *
 *  Created on: Nov 14, 2022
 *      Author: engineer
 */
#include"app.h"




 volatile u8 flage=0;


void normal_mode(void){

	 //green led
	set_led_value (PIN0, MDIO_PORTA, BIN_HIGH);
	set_led_value (PIN2, MDIO_PORTB, BIN_HIGH);
	delay_by_ovf( 5);
	set_led_value (PIN0, MDIO_PORTA, BIN_LOW);

	// yellow led
	       set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
		   set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
			delay_by_ovf( 1);
			set_led_value (PIN1, MDIO_PORTA, BIN_LOW);
			set_led_value (PIN1, MDIO_PORTB, BIN_LOW);
			delay_by_ovf( 1);
			set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
			set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
			delay_by_ovf( 1);
			set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
			set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
			delay_by_ovf( 1);
			set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
			set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
			delay_by_ovf( 1);
			set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
			set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
			delay_by_ovf( 0.5);
			// cars' Red LED and pedestrian Green LEDs are on for five seconds
			set_led_value  (PIN0, MDIO_PORTB, BIN_HIGH);
			set_led_value  (PIN2, MDIO_PORTA, BIN_HIGH);
			set_led_value (PIN2, MDIO_PORTB, BIN_LOW);
			delay_by_ovf( 5);

	//red led

	set_led_value (PIN2, MDIO_PORTA, BIN_HIGH);
	set_led_value (PIN0, MDIO_PORTB, BIN_HIGH);
	delay_by_ovf( 5);
	set_led_value (PIN2, MDIO_PORTA, BIN_LOW);
	set_led_value (PIN0, MDIO_PORTB, BIN_LOW);
	// yellow led

	   set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
		set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
			delay_by_ovf( 1);
			set_led_value (PIN1, MDIO_PORTA, BIN_LOW);
			set_led_value (PIN1, MDIO_PORTB, BIN_LOW);
			delay_by_ovf( 1);
			set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
			set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
			delay_by_ovf( 1);
			set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
			set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
			delay_by_ovf( 1);
			set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
			set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
			delay_by_ovf( 0.5);
			set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
			set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
			delay_by_ovf( 0.5);

}

  void pedestrian_mode(void){
	flage=1;
	u8 car_red_reading;
	u8 car_green_reading;
	u8 car_yellow_reading;
	get_led_value  (PIN2, MDIO_PORTA,&car_red_reading );
	//delay_by_ovf( 5);

	get_led_value   (PIN0, MDIO_PORTA,&car_green_reading );

	get_led_value  (PIN1, MDIO_PORTA,&car_yellow_reading );
	//delay_by_ovf( 5);
	 if(car_red_reading==1 )//check if car red led is onn
	 {

	 	set_led_value  (PIN2, MDIO_PORTA, BIN_HIGH);//car red is on
	 	set_led_value  (PIN0, MDIO_PORTB, BIN_HIGH);//pedestrian green is on
	 	delay_by_ovf( 5);

	 	//delay_by_ovf( 1);

	 }




	 else if (car_green_reading==1||car_yellow_reading==1||car_yellow_reading==0)//check if  car green led is onn or so yellow is blink
	{
	 set_led_value (PIN0, MDIO_PORTA, BIN_LOW);
	set_led_value (PIN2, MDIO_PORTB, BIN_HIGH);//pedestrian red is on

	set_led_value  (PIN2, MDIO_PORTB, BIN_LOW);
	//set_led_value (PIN0, MDIO_PORTA, BIN_LOW);
	//delay_by_ovf( 5);
	// yellow leds blinks
	set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
	set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 1);
		set_led_value (PIN1, MDIO_PORTA, BIN_LOW);
		set_led_value (PIN1, MDIO_PORTB, BIN_LOW);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
		set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
		set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
		set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
		set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
		delay_by_ovf( 0.5);
		// cars' Red LED and pedestrian Green LEDs are on for five seconds
		set_led_value  (PIN0, MDIO_PORTB, BIN_HIGH);
		set_led_value  (PIN2, MDIO_PORTA, BIN_HIGH);
		delay_by_ovf( 5);

	//delay_by_ovf( 5);

}

// cars' Red LED will be off and both Yellow LEDs start blinking for 5 seconds and the pedestrian's Green LED is still on.
mdio_setbinvalue (PIN2, MDIO_PORTA, BIN_LOW);
// yellow leds blinks
        set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
		set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
		set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
		set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
		set_led_value (PIN1, MDIO_PORTB, BIN_LOW);
		delay_by_ovf( 1);
		set_led_value  (PIN1, MDIO_PORTA, BIN_HIGH);
		set_led_value  (PIN1, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 0.5);
		set_led_value  (PIN1, MDIO_PORTA, BIN_LOW);
		set_led_value  (PIN1, MDIO_PORTB, BIN_LOW);
		delay_by_ovf( 0.5);
//After the five seconds the pedestrian Green LED will be off and both the pedestrian Red LED and the cars' Green LED will be on
		set_led_value (PIN0, MDIO_PORTB, BIN_LOW);

		set_led_value  (PIN0, MDIO_PORTA, BIN_HIGH);
		set_led_value  (PIN2, MDIO_PORTB, BIN_HIGH);
		delay_by_ovf( 5);

		set_led_value  (PIN0, MDIO_PORTA, BIN_LOW);
		set_led_value  (PIN2, MDIO_PORTB, BIN_LOW);
		normal_mode();
}

void app_init(void){
	MGIE_enable(); //enable global interrupt
	MEXTI0_init();  //initalize external interrupt
	timer_init( );  //initalize timer

	buttom_init_dir (PIN2,MDIO_PORTD,  BIN_INPUT );  //set bin of inito to be out
	//activate pull up resistor
activate_pull_up (PIN2,MDIO_PORTD, BIN_HIGH);//then set it to be high so if pressed it will be low and generate interupt
	//u8 int0_reading;
	// set two bin outputs for leds
	led_init (PIN0,MDIO_PORTA, BIN_OUTPUT );
	led_init (PIN1,MDIO_PORTA, BIN_OUTPUT );
	led_init (PIN2,MDIO_PORTA, BIN_OUTPUT );

	led_init (PIN0,MDIO_PORTB, BIN_OUTPUT );
	led_init (PIN1,MDIO_PORTB, BIN_OUTPUT );
	led_init (PIN2,MDIO_PORTB, BIN_OUTPUT );
//set bin value initialy with zero
	// bin0 green   bin1 yellow   bin2 red
	set_led_value (PIN0, MDIO_PORTA, BIN_LOW);
	set_led_value (PIN1, MDIO_PORTA, BIN_LOW);
	set_led_value (PIN2, MDIO_PORTA, BIN_LOW);


	set_led_value(PIN0, MDIO_PORTB, BIN_LOW);
	set_led_value(PIN1, MDIO_PORTB, BIN_LOW);
	set_led_value(PIN2, MDIO_PORTB, BIN_LOW);



	MEXIT_callback( pedestrian_mode);//isr function for push buttom



while(1){

	normal_mode();




}


}



