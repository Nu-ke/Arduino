int readPin = A5;
int red = 12;
float readv;
float v1;
int wait= 10;
float resistor;
double current;
int blue = 13;
int green =10;
int light = 3;
float v2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readPin, INPUT);
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);
pinMode(light, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readv = analogRead(readPin);
v1 =(5.0/1024.)*readv;
resistor= (v1/5.)*(10000.);
current = (v1/resistor)*1000.0;
Serial.print(resistor);
Serial.print(", ");
Serial.print(v1);
Serial.print(", ");
Serial.print(current);
Serial.print(", ");

if(v1>=4.0){
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);

}
else if(3<=v1 && v1<4){
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
}
else{
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
}
v2 = (v1/5.)*256.;
analogWrite(light, v2);
Serial.println(v2);
delay(wait);
}
