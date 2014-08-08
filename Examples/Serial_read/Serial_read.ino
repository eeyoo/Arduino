/*
  Arduino Serial READ demo
  
  Created 8 Aug. 2014
  by Feilin Wu
  */
int incomingByte = 0; // for incoming serial port

void setup() {
  // initialize the serial port
  Serial.begin(9600);
}

void loop() {
  // send data only when you receive data
  if (Serial.available() > 0) {
    // read the incoming byte
    incomingByte = Serial.read();
    
    // say what you got
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  }
}
