#include <LED_v2.h>

/*
 * A basic demo for LED library
 * which is myself library created step by step
 * http://arduino.cc/en/Hacking/LibraryTutorial
 */

LED led(13);

void setup() 
{}

void loop() 
{
  led.turnOn(100);
  led.turnOff(100);
}


