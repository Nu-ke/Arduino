#include <IRremote.h> //Make sure to install the library
int IRpin=9;
IRrecv IR(IRpin);
decode_results cmd;
String mycom;
int green=5;
int red=3;
int blue=6;
void setup()
{
Serial.begin(9600);
IR.enableIRIn();
pinMode(red,OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue,OUTPUT);
}
void loop() {
  while (IR.decode(&cmd)==0){ 
}
//  Serial.println(cmd.value,HEX);
delay(1500);
IR.resume();

if(cmd.value==0xF7C03F){
  mycom="whitw/on";
  analogWrite(red,255);
  analogWrite(green,255);
  analogWrite(blue,255);
  Serial.println(mycom);
}
if(cmd.value==0xF740BF){
  mycom="Off";
    analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(blue,0);
  Serial.println(mycom);
}
  if(cmd.value==0xF7807F){
  mycom="bright decrease";
  Serial.println(mycom);
}
  if(cmd.value==0xF700FF){
  mycom="bright increase";
  Serial.println(mycom);
}
 if(cmd.value==0xF720DF){
  mycom="Red";
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(blue,0);
  Serial.println(mycom);
}
if(cmd.value==0xF7A05F){
  mycom="Green";
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(blue,0);
  Serial.println(mycom);
}
if(cmd.value==0xF7609F){
  mycom="blue";
   analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(blue,255);
  Serial.println(mycom);
}
if(cmd.value==0xF710EF){
  mycom="Light red";
  analogWrite(red,255);
  analogWrite(green,50);
  analogWrite(blue,50);
  Serial.println(mycom);
}
if(cmd.value==0xF7906F){
  mycom="light green";
    analogWrite(red,50);
  analogWrite(green,255);
  analogWrite(blue,50);
  Serial.println(mycom);
}
if(cmd.value==0xF750AF){
  mycom="light blue";
    analogWrite(red,50);
  analogWrite(green,50);
  analogWrite(blue,255);
  Serial.println(mycom);
}
if(cmd.value==0xF730CF){
  mycom="Orange";
    analogWrite(red,255);
  analogWrite(green,50);
  analogWrite(blue,50);
  Serial.println(mycom);
}
if(cmd.value==0xF7B04F){
  mycom="Turquoise";
    analogWrite(red,50);
  analogWrite(green,150);
  analogWrite(blue,150);
  Serial.println(mycom);
}
if(cmd.value==0xF7708F){
  mycom="voilet";
  analogWrite(red,255);
  analogWrite(green,150);
  analogWrite(blue,200);
  Serial.println(mycom);
}
if(cmd.value==0xF708F7){
  mycom="light orange";
  analogWrite(red,255);
  analogWrite(green,50);
  analogWrite(blue,150);
  Serial.println(mycom);
}
if(cmd.value==0xF78877){
  mycom="Olive green";
  analogWrite(red,50);
  analogWrite(green,200);
  analogWrite(blue,255);
  Serial.println(mycom);
}
if(cmd.value==0xF748B7){
  mycom="purple";
  analogWrite(red,200);
  analogWrite(green,0);
  analogWrite(blue,255);
  Serial.println(mycom);
}
if(cmd.value==0xF728D7){
  mycom="Yellow";
    analogWrite(red,255);
  analogWrite(green,255);
  analogWrite(blue,0);
  Serial.println(mycom);
}
if(cmd.value==0xF7A857){
  mycom="dark blue";
  analogWrite(red,200);
  analogWrite(green,150);
  analogWrite(blue,150);
  Serial.println(mycom);
}
if(cmd.value==0xF76897){
  mycom="pink";
    analogWrite(red,255);
  analogWrite(green,150);
  analogWrite(blue,150);
  Serial.println(mycom);

}
if(cmd.value==0xF7E01F){
  mycom="White";
  Serial.println(mycom);
}

}
