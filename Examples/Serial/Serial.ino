/*
  Arduino Serial demo
  This demo will print a message on
  Serial Monitor
  
  Created 8 Aug. 2014
  by Feilin Wu
  */
  
void setup() {
  // initialize the serial port
  Serial.begin(9600);
}

void loop() {
  // print message on serial port
  Serial.println("Hello World!");
  // delay 1s
  delay(1000);
}
