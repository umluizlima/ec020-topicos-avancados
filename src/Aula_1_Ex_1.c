/*
===============================================================================
 Name        : Aula_1_Ex_1.c
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

	LPC_GPIO0->FIODIR|=(1<<22); //configura bit 22 como saída

	while(1) {
        LPC_GPIO0->FIOSET|=(1<<22); //seta bit 22 (liga led)
        LPC_GPIO0->FIOCLR|=(1<<22); //reseta bit 22 (desliga led)
    }
    return 0 ;
}
