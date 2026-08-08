#include <Servo.h>
int servo_pin=8;
int servo_position;
int delay_time=500;
Servo my_servo;
String msg ="What angle for the servo?";

void setup() {
  Serial.begin(9600);
  my_servo.attach(servo_pin);
}Servo_Angle_Control

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
  servo_position=Serial.parseInt();
  my_servo.write(servo_position);
}
