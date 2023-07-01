int button1=3;
int button2=5;
int butr1;
int butr2;
int green=9;
float level;
float read;
int readPin=A5;
int wait=100;

void setup() {
  // put your setup code here, to run once:
pinMode(button1,INPUT);
pinMode(button2, INPUT);
pinMode(green, OUTPUT);
pinMode(readPin,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
butr1= digitalRead(button1);
butr2= digitalRead(button2);
read= analogRead(readPin);
while(butr1==0 && butr2==1 && level<=255.0){

  level= level+10.0;
  if(level>=255.0){
    level= 255.;
  }
  else{
  }
  analogWrite(green, level);
  Serial.println(read);
  delay(wait);
  Serial.println(level);
  delay(wait);
  butr1= digitalRead(button1);
}
while(butr2==0 && butr1==1 && level>=0){

  level= level-10.0;
  if(level<0){
    level =0;
  }
  else{
  }
  analogWrite(green, level);
  Serial.println(read);
  delay(wait);
  Serial.println(level);
  delay(wait);
  butr2= digitalRead(button2);
}
Serial.print(butr1);
Serial.print(",");
Serial.println(butr2);
if(butr1==0 && butr2==0){
  digitalWrite(green, LOW);
}
else{}
}
