/*
 * A LED library - http://arduino.cc/en/Hacking/LibraryTutorial
 */

class LED 
{
public:
	LED(int pin);
	void turnOn(int ms);   // LED turn on for ms 
	void turnOff(int ms);  // LED turn off for ms
	
private:
	int _pin;
};