#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

Servo servo_9;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  servo_9.attach(9);
  while(1) {
      servo_9.write(180);
      _delay(1);
      servo_9.write(0);
      _delay(1);

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
