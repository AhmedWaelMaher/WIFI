/*
 * GccApplication1.c
 *
 * Created: 10/30/2019 4:26:24 PM
 * Author : ahmed,ragab
 */
#ifndef MOTOR_CONFG_H_
#define MOTOR_CONFG_H_

#include "DIO.h"

typedef enum {MOtor1,MOtor2,NUM_OF_Motors}Motors_N;


#define MOTOR1 0
#define MOTOR2 1


#define STOP 0
#define FORWARD 1
#define REVERSE 2

typedef struct
{
uint8 MOTOR_ID;
uint8 MOTOR_STATUS;

}MOTOR_cnfg_t;

extern MOTOR_cnfg_t MOTOR_cnfg_arr [NUM_OF_Motors];

#endif /* MOTOR_CONFG_H_ */