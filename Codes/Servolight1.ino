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

  servoPos= (180.0/(650.-940.))*(level-940.0);
    if(servoPos<0){
    servoPos=0;
  }
// Serial.println("Angle:");
// while(Serial.available()==0){

// }
// servoPos=Serial.parseInt();
myServo.write(servoPos);
}
