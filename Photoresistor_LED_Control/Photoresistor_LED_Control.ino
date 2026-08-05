int pin1=A0;
int lightval;
int pin2=8;
int pin3=7;
int delay_time=500;

void setup() {
 Serial.begin(9600);
 pinMode(pin1,INPUT);
 pinMode(pin2,OUTPUT);
 pinMode(pin3,OUTPUT);
}

void loop() {
  lightval=analogRead(A0);
  Serial.println(lightval);
  delay(delay_time);

  if(lightval>200){
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
  }
  
  if(lightval<200){
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
  }

}
