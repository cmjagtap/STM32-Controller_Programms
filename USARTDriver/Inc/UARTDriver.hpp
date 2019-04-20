/*
 * UARTDriver.hpp
 *
 *  	Created on: 11-Mar-2019
 *      Author: Chandramohan Jagtap
 *      Description: UART communication Driver
 *
 */
#ifndef UARTDRIVER_HPP_
#define UARTDRIVER_HPP_

#include <main.hpp>

class UARTDriver
{

	public:
		/**
		 * Constructor for LoggerImplimentation class.
		 *
		 */
		UARTDriver(void);

		/*
		 *  Initiates UART IO
		 */

		void init();

		/*
		 * shutdown the UART Object and clear IO
		 */

		void shutdown();

		/*
		 * sendString takes input as string of char and UART handler then
		 * sends via UART communication
		 *
		 */
	void sendString(UART_HandleTypeDef,char *);

	/*
	 *  receiveString takes UART handler object and receive string into buffer.
	 */

	void receiveString(UART_HandleTypeDef,char *,int charSize);
};


#endif /* UARTDRIVER_HPP_ */
