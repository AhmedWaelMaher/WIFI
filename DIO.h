/*
 * GccApplication1.c
 *
 * Created: 10/30/2019 4:26:24 PM
 * Author : ahmed,ragab
 */

#ifndef DIO_H_
#define DIO_H_

#include "DIO_conf.h"

#define MAX_NUM_PINS (uint8 )32


STD_Fun_t DIO_Init(void);
STD_Fun_t DIO_Write(PINS_t pin , uint8 value);
STD_Fun_t DIO_Read( PINS_t pin ,uint8 *PVal);




#endif /* DIO_H_ */