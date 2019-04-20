/*
 * UARTDriver.cpp
 *
 *  Created on: 11-Mar-2019
 *      Author: Chandramohan Jagtap
 */


#include "UARTDriver.hpp"
#include<string.h>


UARTDriver::UARTDriver(){

}

	/*
	 * Implementation of Init() method to initiate  GPIO and UART IO
	 */

void UARTDriver::init(){

}

	/*
	 * Implementation of shutdown method closed GPIO and UART IO
	 */

void UARTDriver::shutdown()
{

}	/*
	 * Implementation of sendString method using UART communication
	 */

void UARTDriver::sendString(UART_HandleTypeDef huart2,char  *data )
{

	 	 HAL_UART_Transmit(&huart2,(uint8_t *) data, strlen(data), 10);
}
	/*
	 *Implementation of receiveString method using UART
	 */

void UARTDriver::receiveString(UART_HandleTypeDef huart2,char *receiveBuffer,int charSize)
{

	HAL_UART_Receive(&huart2, (uint8_t *)receiveBuffer,charSize, 10);

}

