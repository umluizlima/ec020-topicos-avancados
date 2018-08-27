/*
===============================================================================
 Name        : Aula_1_Ex_2.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

void delay(int n)
{
	unsigned int d;
	for (;n>=0;n--)
		for (d=0; d<=60000; d++);
}

int main(void) {
	LPC_GPIO0->FIODIR |= (1<<22); //configura bit 22 como saída

	while(1) {
		LPC_GPIO0->FIOSET |= (1<<22); //Seta bit 22 (liga Led)
		delay(200);
		LPC_GPIO0->FIOCLR |= (1<<22); //Reseta bit 22 (desliga Led)
		delay(200);
	}

	return 0;
}
