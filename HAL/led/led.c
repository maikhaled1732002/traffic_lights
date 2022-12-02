/*
 * led.c
 *
 *  Created on: Nov 12, 2022
 *      Author: engineer
 */
#include "led.h"
u8 led_init(u8 bin_no,u8 port_no ,u8 dir ){

	mdio_setbindirection (bin_no, port_no, dir );
	if (1 ){
			return ok;
		}
		else {
			return error;
		}

}
u8 led_toggle (u8 bin_no,u8 port_no){

	mdio_togglepin (bin_no, port_no  );
	if (1 ){
			return ok;
		}
		else {
			return error;
		}
}
u8 set_led_value(u8 bin_no,u8 port_no ,u8 dir ){

	mdio_setbinvalue (bin_no, port_no, dir );
	if (1 ){
			return ok;
		}
		else {
			return error;
		}
}
u8 get_led_value (u8 bin_no,u8 port_no, u8 *led_reading ){
	mdio_Readbin (bin_no,port_no, led_reading );
	if (1 ){
			return ok;
		}
		else {
			return error;
		}


}
