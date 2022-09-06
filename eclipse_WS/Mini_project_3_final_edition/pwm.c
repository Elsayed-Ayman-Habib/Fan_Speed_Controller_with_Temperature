/******************************************************************************
 *
 * Module: PWM
 *
 * File Name: pwm.c
 *
 * Description: Source file for the PWM driver
 *
 * Author: Elsayed Ayman Elsayed Ali Habib
 *
 *******************************************************************************/

#include "PWM.h"
#include <avr/io.h>
#include "gpio.h"
#include "common_macros.h"

/*******************************************************************************
 *                         Function Definitions                                *
 *******************************************************************************/

void PWM_Timer0_Start(uint8 duty_cycle)
{
	TCNT0 = 0;
	OCR0  = duty_cycle;
	GPIO_setupPinDirection(PORTB_ID,PIN3_ID,PIN_OUTPUT);
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
    SET_BIT(TCCR0,COM01);
    SET_BIT(TCCR0,CS01);
}


