
//UART_SendByte(LPC_UART_TypeDef* UARTx, uint8_t Data)

void initScreen(){
	UART_SendByte(UART0, 0xA0);
}

void printScreen(char * message, char posX, char posY){
	//Se positionne pour écrire
	UART_SendByte(UART0, 0xA1);
	UART_SendByte(UART0, posX);
	UART_SendByte(UART0, posY);
	//Ecrit
	UART_SendByte(UART0, message.dir);
	UART_SendByte(UART0, message.valeur);
}

void clearScreen(){
	UART_SendByte(UART0, 0xA3);
	UART_SendByte(UART0, 0x01);
}
