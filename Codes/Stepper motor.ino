#include <Stepper.h>
int SPR=2048;
Stepper S1(SPR,8,10,9,11);
int speed=1000;
int wait=1000;
int button=2;
int buto=1;
int butn;
int dir=1;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(button, INPUT);
digitalWrite(button, HIGH);
S1.setSpeed(speed);
}

void loop() {
  // put your main code here, to run repeatedly:
butn= digitalRead(button);
Serial.print(buto);
Serial.print(",");
Serial.println(butn);
if(butn==0 && buto==1){
  dir= dir*(-1);
}
else{};

S1.step(dir);
buto=butn;


}