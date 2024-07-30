//standard Library
#include <stm32f10x.h>
//My Library
#include "main.h"
#include "gp.h"
#include "pwm.h"

int main()
{
	RCC->APB2ENR |= 0xFC;
	gpio_init();
	pwm_init();
	
	while(1);
}



