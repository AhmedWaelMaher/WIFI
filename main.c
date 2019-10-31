/*
 * GccApplication1.c
 *
 * Created: 10/30/2019 4:26:24 PM
 * Author : ahmed
 */ 

#include "ESP_Driver.h"
#include "Motor.h"
 
 /*
 Configurations
 */
 
 #define PASSWORD "12345678"
 #define SSID "WELL"
 #define PORT "1234"
 #define MODE  Server

uint8_t data=0;

/*
Call Back Function of UART
*/
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
	_delay_ms(1000);
//  	WIFI_Service_Start(AP_Station_mode,PORT,SSID,PASSWORD,NULL,NULL,NULL,NULL);
//  	_delay_ms(1000);
 	UART_Write_String("AT\r\n");/* Check connection with WIFI module */
 	_delay_ms(1000);
 	UART_Write_String("AT+RST\r\n");/* Reset the module */
 	_delay_ms(1000);
	 UART_Write_String("AT+CWMODE_DEF=3");/* Configure the WIFI as an access point and client */
	 _delay_ms(1000);
 	UART_Write_String("AT+CWSAP_DEF=WELL,12345678,5,3\r\n");/* Configure the network */
 	_delay_ms(1000);
 	UART_Write_String("AT+CWJAP_DEF=Sprints,$print$2019\r\n");/* Join a general network */
 	_delay_ms(1000);
 	UART_Write_String("AT+CIFSR\r\n");/* Check for the IPs (Server and Client) */
 	_delay_ms(1000);
	 UART_Write_String("AT+UART_DEF=9600,8,1,0,0\r\n");/* Configure the baudrate to be 9600 */
	 _delay_ms(1000);
 	UART_Write_String("AT+CIPSTA=192.168.1.10,192.168.1.1,255.255.255.0\r\n");/* Assign the IP of WIFI */
 	_delay_ms(1000);
 	UART_Write_String("AT+CIFSR\r\n");/* Check for the IPs (Server and Client) */
 	_delay_ms(1000);
	UART_Write_String("AT+CIPMUX=1\r\n");/* Enable multiple connections */
	_delay_ms(1000);
	UART_Write_String("AT+CIPSERVER=1,1234\r\n");/* Set the port number */
	_delay_ms(1000);
	Enable_Interrupts();

    while (1) 
    {
		/* Waiting the UART interrupt */
    }
}

