class Led 
{
public:
	Led(int p);
	void turnOn(int ms);   // LED turn on for ms 
	void turnOff(int ms);  // LED turn off for ms
	
private:
	int pin;
};