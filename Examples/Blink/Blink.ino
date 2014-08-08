//#include <Led.h>


/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
class Led 
{
public:
	Led(int pin);
	void turnOn(int ms);   // LED turn on for ms 
	void turnOff(int ms);  // LED turn off for ms
	
private:
	int pin;
};

Led::Led(int pin)
{
	this->pin = pin;
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


// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledpin = 13;
Led led(ledpin);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  //pinMode(led, OUTPUT);
  //Led *led = new Led(ledpin);  
}

// the loop routine runs over and over again forever:
void loop() {
  //digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);               // wait for a second
  //digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);               // wait for a second
  
  //Led led(ledpin);
  led.turnOn(100);
  led.turnOff(100);
  //led->turnOn(100);
  //led->turnOff(100);
}
