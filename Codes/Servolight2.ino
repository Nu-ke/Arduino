#include <Servo.h>
int servoPin=10;
float servoPos=100;
float level;
int photo=A5;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(photo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  level= analogRead(photo);
  Serial.print(level);
  Serial.print(",");
  Serial.println(servoPos);
if(level>=920){
  servoPos=0;
}
else if(level>=850){
  servoPos=60;
}
else if(level>=710){
  servoPos=120;
}
else if(level>=600){
  servoPos=180;
}
myServo.write(servoPos);
}