#include "ultrasonic.h"

Ultrasonic ultra;

int trigpin = 2;
int echopin = 3;

void setup() {
  Serial.begin(9600);
  
   ultra.initialize(trigpin, echopin);
}

void loop()
{
  unsigned long dist = ultra.distance();
   Serial.print("present distance: ");
   Serial.print(dist, DEC);
   Serial.println("mm");
   
   delay(500);  // twice for 1s
}
