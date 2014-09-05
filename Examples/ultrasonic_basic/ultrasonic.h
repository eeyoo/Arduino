/*
 * ultrasonic for US-100
 */
 
#include <Arduino.h>

#ifndef ULTRASONIC_H
#define ULTRASONIC_H

class Ultrasonic {

  public: 
  bool initialize(int trig, int echo);
  unsigned long distance();
  
  void pulse(int us);
  
  private:
  void pulseEcho(int us);
  
  unsigned long dist_mm;
  unsigned long echo_time_us;
  int trig_pin;
  int echo_pin;
  
};
#endif
