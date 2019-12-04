#include<Servo.h>
Servo myServo;

void setup(){

  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  pinMode(A1,INPUT);
myServo.attach(A2);
}
 
void loop(){
  digitalWrite(8,LOW);
  int light=analogRead(A0);
  int moisture=analogRead(A1);
  if(light>=500)
  {
    digitalWrite(8,HIGH); 
  }
  else
  {
    digitalWrite(8,LOW);
  }
  if(moisture<=0)
  { myServo.write(30);
  delay(1500);
    
  }
  else
  {
    myServo.write(90);
    delay(1500);
  }
}
 
 
