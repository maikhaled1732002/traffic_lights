/*
 * buttom.c
 *
 *  Created on: Nov 14, 2022
 *      Author: engineer
 */
#include "buttom.h"

u8 buttom_init_dir(u8 PIN, u8 PORT,  u8 dir){
	mdio_setbindirection ( PIN,  PORT,   dir);
	if (1 ){
		return ok;
	}
	else {
		return error;
	}
}

u8 activate_pull_up ( u8 PIN, u8 PORT, u8 BIN_val){
	mdio_setbinvalue (PIN, PORT, BIN_val);
	if (1 ){
		return ok;
	}
	else {
		return error;

}
}
