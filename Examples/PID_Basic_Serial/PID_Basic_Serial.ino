/********************************************************
 * PID Basic Example
 * Reading analog input 0 to control analog PWM output 3
 ********************************************************/

#include <PID_v1.h>

//Define Variables we'll be connecting to
double Setpoint, Input, Output;

//Specify the links and initial tuning parameters
PID myPID(&Input, &Output, &Setpoint,2,5,1, DIRECT);

void setup()
{
  //initialize the variables we're linked to
  Input = analogRead(0);
  Setpoint = 100;

  //turn the PID on
  myPID.SetMode(AUTOMATIC);
  
  
  // initial serial port
  Serial.begin(9600);
}

void loop()
{
  Input = analogRead(0);
  Serial.print(Input + '\t');
  myPID.Compute();
  analogWrite(3,Output);
  Serial.println(Output);
}


