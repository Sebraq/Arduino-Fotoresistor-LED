#include "SensorLuz.h"
int pin = A5;
SensorLuz sensor;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensor.mode(pin, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor.sensor(pin);
  sensor.ledG(3);
}
