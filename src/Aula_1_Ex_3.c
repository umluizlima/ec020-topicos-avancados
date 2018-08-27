/*
===============================================================================
 Name        : Aula_1_Ex_3.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

int main(void) {

	LPC_GPIO0->FIODIR|=(1<<22);
	LPC_GPIO2->FIODIR&=~(1<<12);

	LPC_GPIO0->FIOCLR|=(1<<22);
	LPC_GPIO2->FIOSET|=(1<<12);

	while(1) {
		if (LPC_GPIO2->FIOPIN&(1<<12)) {
			LPC_GPIO0->FIOSET|=(1<<22); //liga led
		}
		else {
			LPC_GPIO0->FIOCLR|=(1<<22); //desliga led
		}
    }
    return 0 ;
}
