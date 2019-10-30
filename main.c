/*
 * GccApplication1.c
 *
 * Created: 10/30/2019 4:26:24 PM
 * Author : ahmed
 */ 

#include "ESP_Driver.h"
#include "Motor.h"
// 
// ElementDataType *PASSWORD= "12345678";
// ElementDataType *SSID= "WELL";
// ElementDataType *PORT= "1234";
// #define MODE     Server

uint8_t data=0;

void Application(uint8_t data){
	if('r' == data){
 		MOTOR_Forward(MOTOR1);
 		MOTOR_Forward(MOTOR2);
	}
	else if('f' == data){
 		MOTOR_Forward(MOTOR1);
 		MOTOR_Reverse(MOTOR2);
	}
	else if('b' == data){
 		MOTOR_Forward(MOTOR2);
 		MOTOR_Reverse(MOTOR1);
	}
	else if('l' == data){
 		MOTOR_Reverse(MOTOR1);
 		MOTOR_Reverse(MOTOR2);
	}
	else if('s' == data){
 		MOTOR_Stop(MOTOR1);
 		MOTOR_Stop(MOTOR2);
	}
	else{
		
	}
}

int main(void)
{
	
	
	Disable_Interrupts();
 	MOTOR_init();
	_delay_ms(5000);
	 /*Server, PORT, SSID, PASSWORD, NULL, NULL, NULL, NULL*/
	UART_Init(9600,Application);
	//WIFI_Service_Start(MODE,PORT,SSID,PASSWORD,NULL,NULL,NULL,NULL);
	_delay_ms(1000);
	UART_Write_String("AT+CIPMUX=1\r\n");
	_delay_ms(1000);
	UART_Write_String("AT+CIPSERVER=1,1234\r\n");
	_delay_ms(1000);
	Enable_Interrupts();
	
    /* Replace with your application code */
    while (1) 
    {
    }
}

