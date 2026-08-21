int led_state=0;
int led_pin=7;
int button_pin=9;
int button_new;
int button_old=1;
int delay_time=200;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin,OUTPUT);
  pinMode(button_pin,INPUT);
}

void loop() {
  button_new=digitalRead(button_pin);
  if(button_old==0 && button_new==1){
    if(led_state==0){
      digitalWrite(led_pin,HIGH);
      led_state=1;
    }
    else{
      digitalWrite(led_pin,LOW);
      led_state=0;
    }
  }
  button_old=button_new;
}
