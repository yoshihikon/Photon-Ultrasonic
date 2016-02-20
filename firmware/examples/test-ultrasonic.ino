#include "Ultrasonic/Ultrasonic.h"

Ultrasonic ultrasonic(7);

int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
    
  long RangeInCentimeters;
  RangeInCentimeters = ultrasonic.MeasureInCentimeters();
  
  delay(150);
  
  Serial.println(RangeInCentimeters, DEC);
  
}