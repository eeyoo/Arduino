/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

class Led {
public:
  Led(int nu);
  void on();
  void off();
private:
  int nu;
};

Led::Led(int nu) {
  this->nu = nu;
  pinMode(nu,OUTPUT);
}

void Led::on() {
  digitalWrite(nu, HIGH);
}

void Led::off() {
  digitalWrite(nu, LOW);
}

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  //pinMode(led, OUTPUT); 
  // int index = 0;  
  //Led l(led);
}
/*
void fun(int cnt, int ts) {
  
  while (cnt-- > 0) {
  digitalWrite(led, HIGH);
  delay(ts);
  digitalWrite(led, LOW);
  delay(ts);
  } 
}*/

// the loop routine runs over and over again forever:
void loop() {
  Led l(led);
  l.on();
  delay(500);
  l.off();
  delay(500);
  //loop1(100);
  //fun(10, 10);
  //fun(10,20);
  //fun(10,30);
  //fun(10,50);
  //fun(10,80);
  //fun(10,100);
  //fun(10,50);
  
  //digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(100);               // wait for a second
  //digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //delay(100);               // wait for a second
}
