int red_pin=13;
int green_pin=8;
int blue_pin=4;
String my_color;
String msg="which color do you want?";

void setup() {
 Serial.begin(9600);
 pinMode(red_pin,OUTPUT);
 pinMode(green_pin,OUTPUT);
 pinMode(blue_pin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
  my_color=Serial.readString();
  if(my_color=="red"){
    digitalWrite(red_pin,LOW);
    digitalWrite(green_pin,HIGH);
    digitalWrite(blue_pin,HIGH);
  }

  if(my_color=="green"){
    digitalWrite(red_pin,HIGH);
    digitalWrite(green_pin,LOW);
    digitalWrite(blue_pin,HIGH);
  }

  if(my_color=="blue"){
    digitalWrite(red_pin,HIGH);
    digitalWrite(green_pin,HIGH);
    digitalWrite(blue_pin,LOW);
  }

 if(my_color=="yellow"){
    analogWrite(red_pin,0);
    analogWrite(green_pin,100);
    analogWrite(blue_pin,255);
  }

  if(my_color=="cyan"){
    analogWrite(red_pin,255);
    analogWrite(green_pin,0);
    analogWrite(blue_pin,0);
  }

if(my_color=="magenta"){
    analogWrite(red_pin,0);
    analogWrite(green_pin,255);
    analogWrite(blue_pin,100);
  }

}

