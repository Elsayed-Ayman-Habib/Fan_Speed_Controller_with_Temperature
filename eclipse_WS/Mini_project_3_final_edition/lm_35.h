/******************************************************************************
 *
 * Module: LM35
 *
 * File Name: LM35.h
 *
 * Description: Header file for the LM35 driver
 *
 * Author: Elsayed Ayman Elsayed Ali Habib
 *
 *******************************************************************************/

#ifndef LM_35_H_
#define LM_35_H_
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define SENSOR_CHANNEL_ID         2
#define SENSOR_MAX_VOLT_VALUE     1.5
#define SENSOR_MAX_TEMPERATURE    150

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

uint8 LM35_getTemperature(void);


#endif /* LM_35_H_ */
