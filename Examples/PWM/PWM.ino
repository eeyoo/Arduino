/*
 * pwm demo
 */
 
int ledPin = 13;

int analogPin = 9;
 //har c =
 int val = 0;
 int ret = 0;
 
 void setup()
 {
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
 }
 
void loop()
{
   
  val = analogRead(analogPin);
  ret = map(val, 0,1023,0,255);
  analogWrite(ledPin, ret);
  Serial.println(ret);
}
