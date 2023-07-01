int green=8;
int red=5;
int vib=2;
int vibv;
int wait=100;

void setup() {
  // put your setup code here, to run once:
pinMode(vib, INPUT);
digitalWrite(vib, HIGH);
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
vibv= digitalRead(vib);
if(vibv==1){
  digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
}
else if(vibv==0){
  digitalWrite(green, HIGH);
  digitalWrite(red,LOW);
}
Serial.println(vibv);
}
