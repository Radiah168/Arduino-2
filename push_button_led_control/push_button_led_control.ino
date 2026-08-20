int led_pin=7;
int button_pin=9;
int button_value;
int delay_time=200;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin,OUTPUT);
  pinMode(button_pin,INPUT);
}

void loop() {
  button_value=digitalRead(button_pin);
  Serial.println(button_value);
  delay(delay_time);

  if(button_value==1){
    digitalWrite(led_pin,LOW);
  }
  if(button_value==0){
    digitalWrite(led_pin,HIGH);
  }

}
