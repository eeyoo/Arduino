#include <LED_v2.h>

/******************************
 * LED library example
 * led blink demo implet
 *******************************/
int pin=13;
LED led(pin);

void setup()
{
}

void loop()
{
  led.turnOn(500); // LED on 500ms
  led.turnOff(500);  // LED off 500ms
}
