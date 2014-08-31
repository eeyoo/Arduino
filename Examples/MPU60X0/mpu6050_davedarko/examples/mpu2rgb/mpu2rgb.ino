/*
based on http://playground.arduino.cc/Main/MPU-6050#easy 
used in projects of https://github.com/davedarko/
*/
#include <mpu6050.h>
#include <Wire.h>

const int redPin =  3;      // the number of the LED pin
const int grePin =  5;      // the number of the LED pin
const int bluPin =  6;      // the number of the LED pin

void setup() {      
  int error;
  uint8_t c;

  pinMode(redPin, OUTPUT);
  pinMode(grePin, OUTPUT);
  pinMode(bluPin, OUTPUT);

  Serial.begin(9600);
  Wire.begin();
  // default at power-up:
  //    Gyro at 250 degrees second
  //    Acceleration at 2g
  //    Clock source at internal 8MHz
  //    The device is in sleep mode.
  //

  error = MPU6050_read (MPU6050_WHO_AM_I, &c, 1);
  Serial.print(F("WHO_AM_I : "));
  Serial.print(c,HEX);
  Serial.print(F(", error = "));
  Serial.println(error,DEC);

  // According to the datasheet, the 'sleep' bit
  // should read a '1'. But I read a '0'.
  // That bit has to be cleared, since the sensor
  // is in sleep mode at power-up. Even if the
  // bit reads '0'.
  error = MPU6050_read (MPU6050_PWR_MGMT_2, &c, 1);
  Serial.print(F("PWR_MGMT_2 : "));
  Serial.print(c,HEX);
  Serial.print(F(", error = "));
  Serial.println(error,DEC);


  // Clear the 'sleep' bit to start the sensor.
  MPU6050_write_reg (MPU6050_PWR_MGMT_1, 0);
}


void loop() {
  int error;
  double dT;
  accel_t_gyro_union accel_t_gyro;

  error = MPU6050_read (MPU6050_ACCEL_XOUT_H, (uint8_t *) &accel_t_gyro, sizeof(accel_t_gyro));

  uint8_t swap;
  #define SWAP(x,y) swap = x; x = y; y = swap

  SWAP (accel_t_gyro.reg.x_accel_h, accel_t_gyro.reg.x_accel_l);
  SWAP (accel_t_gyro.reg.y_accel_h, accel_t_gyro.reg.y_accel_l);
  SWAP (accel_t_gyro.reg.z_accel_h, accel_t_gyro.reg.z_accel_l);
  SWAP (accel_t_gyro.reg.t_h, accel_t_gyro.reg.t_l);
  SWAP (accel_t_gyro.reg.x_gyro_h, accel_t_gyro.reg.x_gyro_l);
  SWAP (accel_t_gyro.reg.y_gyro_h, accel_t_gyro.reg.y_gyro_l);
  SWAP (accel_t_gyro.reg.z_gyro_h, accel_t_gyro.reg.z_gyro_l);

  // Print the raw acceleration values

// values of the gyroscope mapped to rgb
int red = map(accel_t_gyro.value.x_gyro, -32768, 32767, 0, 255);
int gre = map(accel_t_gyro.value.y_gyro, -32768, 32767, 0, 255);
int blu = map(accel_t_gyro.value.z_gyro, -32768, 32767, 0, 255);

/*
// values of the accelerator mapped to rgb
int red = map(accel_t_gyro.value.x_accel, -32768, 32767, 0, 255);
int gre = map(accel_t_gyro.value.y_accel, -32768, 32767, 0, 255);
int blu = map(accel_t_gyro.value.z_accel, -32768, 32767, 0, 255);
*/

analogWrite(redPin, red);
analogWrite(grePin, gre);
analogWrite(bluPin, blu);

Serial.print(red);
Serial.print(' ');
Serial.print(gre);
Serial.print(' ');
Serial.println(blu);

  delay(10);
}