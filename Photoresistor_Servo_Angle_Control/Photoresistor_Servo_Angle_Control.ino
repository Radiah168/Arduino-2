#include <Servo.h>
int light_pin=A0;
int servo_pin=8;
int light_val;
int servo_position;
float angle;
int delay_time=500;
Servo myServo;
void setup() {
  Serial.begin(9600);
  pinMode(light_pin,INPUT);
  pinMode(servo_pin,OUTPUT);
  myServo.attach(servo_pin);
}

void loop() {
  light_val=analogRead(light_pin);
  angle=(-180./335.)*light_val+(180.*340.)/335.;
  myServo.write(angle);
  Serial.println(angle);
  delay(delay_time);

}
