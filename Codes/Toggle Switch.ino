int green=8;
int button= 3;
int butr;
int wait=100;
int greenR=12;
int read;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(green, OUTPUT);
pinMode(button, INPUT);
pinMode(greenR, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
butr= digitalRead(button);
Serial.print(butr);
Serial.print(",");
Serial.println(read);
read= digitalRead(greenR);

while (butr==0){
  if(read==0){
    digitalWrite(green,HIGH);
  }
  else if(read==1){
    digitalWrite(green,LOW);
  }
  butr= digitalRead(button);
Serial.print(butr);
Serial.print(",");
Serial.println(read);
}

}
