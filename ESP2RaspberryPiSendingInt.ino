/*
 Name:		ESP2RaspberryPiSendingInt.ino
 Created:	6/27/2023 11:41:43 AM
 Author:	Imami Joel Betofe
*/


#include <HardwareSerial.h>

// set up a software serial port on pins 2 (TX) and 3 (RX)
HardwareSerial espSerial(1);
int s;

void setup() {
	// initialize the serial port at 115200 baud
	Serial.begin(115200);
	// initialize the software serial port at 9600 baud
	espSerial.begin(9600, SERIAL_8N1, 18, 19);
    s = 20;
}

void loop() {
	// send a command to the Raspberry Pi
	
	espSerial.println(s);
	delay(1000);
}
