//#include <Arduino.h>

LED::LED(int pin)
{
	myPin = pin;
	pinMode(myPin, OUTPUT);
}

void LED::TurnOn(int ms)
{
	digitalWrite(myPin, HIGH);
	delay(ms);
}

void LED::TurnOff(int ms)
{
	digitalWrite(myPin, LOW);
	delay(ms);
}