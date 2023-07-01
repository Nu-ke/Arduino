int blinks;
String msg = "colour : ";
String colour;
int bt = 100;
int j;
int red =12;
int green = 7;
int blue = 2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){

}
colour = Serial.readString();
if (colour == "green"|| colour == "Green"){
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
}
else if(colour == "blue" || colour == "Blue"){
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
}
else if(colour == "red" || colour == "Red"){
    digitalWrite(green,LOW);
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
}
else if(colour = "off"){
      digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
}
else {
  Serial.println("please enter valid colour");
}
}


