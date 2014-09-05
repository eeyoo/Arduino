/*
 * US-100 
 */
 
unsigned int trigpin = 2; // Trig GPIO pin
unsigned int echopin = 3; // Echo GPIO pin
int ledpin = 13; // debug led
bool led_status = LOW;

unsigned long time_echo_us = 0;  // ultrasonic echo time by us
unsigned long length_mm = 0;     // distance length by mm

void setup() {
  // initialize serial
  Serial.begin(9600);
  
  // initialize GPIO for pin 2 and 3 pin mode
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.println("initialize successful...");
}

void loop() {
  digitalWrite(trigpin, HIGH);  // set Trig pin high
  delayMicroseconds(10);  // for 50 us (>10us enable)
  digitalWrite(trigpin, LOW);  // set Trig pin low
  
  time_echo_us = pulseIn(echopin, HIGH);  // compute ultrasonic echo time
  Serial.println(time_echo_us, DEC);
  if ((time_echo_us > 1) && (time_echo_us < 60000)) // value between(1, 60000)
  {
      length_mm = (time_echo_us * 340) / (2 * 1000); // single distance compute
      Serial.print("present distance: ");
      Serial.print(length_mm, DEC);
      Serial.println("mm");
      
      if ((length_mm > 100) && (length_mm < 300))
      {
          led_status = HIGH;
      }
      else {
          led_status = LOW;
      }
  }
  
  digitalWrite(ledpin, led_status);
  //led_status = !led_status;
  delay(500);  // measure twice 1s
  
}
