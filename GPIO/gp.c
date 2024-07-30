
#include "gp.h"



void gpio_init() {

	GPIOA->CRL |= 0x3333;
	GPIOA->CRH |= 0x3333;
		
}

