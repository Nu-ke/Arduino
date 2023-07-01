int readPin=A5;
int readV;
float V;
int wait=100;
int buzz=A3;

void setup() {
  // put your setup code here, to run once:
 pinMode(readPin, INPUT);
 pinMode(buzz, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   readV= analogRead(readPin);
  if(readV>=500){
    digitalWrite(buzz,HIGH);
  }
  else{
    digitalWrite(buzz,LOW);
  }
  V= (5.0/1024.0)*readV;
  Serial.println(readV);
  delay(wait);
}
