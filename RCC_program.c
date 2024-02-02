/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 28 DES 2023             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F103xx             */
/**********************************************/

#include <stdint.h>
#include "STM32F446xx.h"
#include"RCC_interfaces.h"

void RCC_AHB1_peripheral_enable(char peripheral)
{
	SET_BIT(RCC->AHB1ENR,peripheral);
}
void RCC_APB2_peripheral_enable(char peripheral)
{
	SET_BIT(RCC->APB2ENR,peripheral);
}
