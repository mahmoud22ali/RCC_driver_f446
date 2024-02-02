/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 1 jan 2024             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F446xx             */
/**********************************************/

#ifndef RCC_INTERFACING_H_
#define RCC_INTERFACING_H_

enum
{
	GPIOAEN=0,
	GPIOBEN=1,
	GPIOCEN=2,
	GPIODEN=3,
	GPIOEEN=4,
	GPIOFEN=5,
	GPIOGEN=6,
	GPIOHEN=7,
	CRCEN=12,
	BKPSRAMEN=18,
	DMA1EN=21,
	DMA2EN=22,
	OTGHSEN=29,
	OTGHSULPIEN=30,
};

enum
{
	TIM1EN=0,
	TIM8EN=1,
	USART1EN=4,
	USART6EN=5,
	ADC1EN=8,
	ADC2EN=9,
	ADC3EN=10,
	SDIOEN=11,
	SDI1EN=12,
	SDI4EN=13,
	SYSCFGEN=14,
	TIM9EN=16,
	TIM10EN=17,
	TIM11EN=18,
	SAI1EN=22,
	SAI2EN=23,
};


void RCC_AHB1_peripheral_enable(char peripheral);
void RCC_APB2_peripheral_enable(char peripheral);

#endif 
