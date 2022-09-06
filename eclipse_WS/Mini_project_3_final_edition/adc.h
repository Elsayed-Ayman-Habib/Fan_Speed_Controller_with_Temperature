/******************************************************************************
 *
 * Module: ADC
 *
 * File Name: adc.c
 *
 * Description: Header file for the ADC driver
 *
 * Author: Elsayed Ayman Elsayed Ali Habib
 *
 *******************************************************************************/

#ifndef ADC_H_
#define ADC_H_
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define ADC_MAXIMUM_VALUE    1023
#define ADC_REF_VOLT_VALUE   2.56


/*********************************************************
 *                    Types Declaration                  *
 *********************************************************/

typedef enum {
	AREF,AVCC,Reserved,Internal
}ADC_ReferenceVoltage;

typedef enum {
	NO_prescaler,F_CPU_2,F_CPU_4,F_CPU_8,F_CPU_16,F_CPU_32,F_CPU_64,F_CPU_128
}ADC_Prescaler;

typedef struct{
ADC_ReferenceVoltage ref_volt;
ADC_Prescaler prescaler;
}ADC_ConfigType;

/*********************************************************
 *                   Function Prototypes                 *
 ********************************************************/

void ADC_init(const ADC_ConfigType * Config_Ptr);

uint16 ADC_readChannel(uint8 CH_num);




#endif /* ADC_H_ */
