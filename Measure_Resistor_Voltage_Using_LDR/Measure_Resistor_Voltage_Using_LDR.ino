int pin=A0;
int lightval;
int delay_time=500;
void setup() {
 Serial.begin(9600);
 pinMode(pin,INPUT);
}

void loop() {
  lightval=analogRead(A0);
  Serial.println(lightval);
  delay(delay_time);
}
