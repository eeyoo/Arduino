#include "Arduino.h"  // namespace for Arduino language
#include "LED_v2.h"   // library header


LED::LED(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void LED::turnOn(int ms)
{
	digitalWrite(_pin, HIGH);
	delay(ms);
}

void LED::turnOff(int ms)
{
	digitalWrite(_pin, LOW);
	delay(ms);
}