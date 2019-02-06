/*
 * main.c
 *
 *  Created on: Feb 6, 2019
 *      Author: Kamel
 */

#include "avr/io.h"
#include "avr/delay.h"
void main(void){

	DDRA=0xff;
	while(1){
		PORTA=0xff;
		_delay_ms(500);
		PORTA=0x00;
		_delay_ms(500);

	}
}

