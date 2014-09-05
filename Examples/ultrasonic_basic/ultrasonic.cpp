#include "ultrasonic.h"

bool Ultrasonic::initialize(int trig, int echo)
{
    trig_pin = trig;
    echo_pin = echo;
    pinMode(trig_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    Serial.println("Ultrasonic init successful...");
}

void Ultrasonic::pulseEcho(int us)
{
   digitalWrite(trig_pin, HIGH);
   delayMicroseconds(us);
   digitalWrite(trig_pin, LOW);
}

unsigned long Ultrasonic::distance()
{
   //digitalWrite(trig_pin, HIGH);
   //delayMicroseconds(10);
   //digtialWrite(trig_pin, LOW);
   pulseEcho(10);
   
   echo_time_us = pulseIn(echo_pin, HIGH);
   if ((echo_time_us < 60000) && (echo_time_us > 1))
   {
      dist_mm = (echo_time_us * 340) / (2 * 1000);
      return dist_mm;
   } else {
      return -1;
   }
}
