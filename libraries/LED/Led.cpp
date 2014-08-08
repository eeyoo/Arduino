#include <Arduino.h>

Led::Led(int p)
{
	pin = p;
	pinMode(pin, OUTPUT);
}

void Led::turnOn(int ms)
{
	digitalWrite(pin, HIGH);
	delay(ms);
}

void Led::turnOff(int ms)
{
	digitalWrite(pin, LOW);
	delay(ms);
}