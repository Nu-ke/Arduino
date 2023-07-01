int photo=A5;
int green=8;
int red=7;
int wait= 100;
float readV;
int buzz=3;


void setup() {
  // put your setup code here, to run once:
pinMode(photo, INPUT);
pinMode(green, OUTPUT);
pinMode(red, OUTPUT);
pinMode(buzz, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readV=analogRead(photo);
  Serial.println(readV);
  delay(wait);
  if(readV>=940.){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);

  }
  else{
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }

  digitalWrite(buzz, HIGH);
  delayMicroseconds(readV);
  digitalWrite(buzz, LOW);
  delayMicroseconds(readV);


}
