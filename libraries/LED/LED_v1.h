class LED 
{
public:
	LED(int pin);
	void TurnOn(int ms);   // LED turn on for ms 
	void TurnOff(int ms);  // LED turn off for ms
	
private:
	int myPin;
};