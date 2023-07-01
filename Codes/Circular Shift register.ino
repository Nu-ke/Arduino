int latchPin=11;
int clockPin=9;
int dataPin=12;
int wait=1000;
byte LED=0b10000000;

byte extra=0b0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin, OUTPUT);
pinMode(clockPin, OUTPUT);
pinMode(dataPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin, LOW);
shiftOut(dataPin,clockPin,LSBFIRST,LED);
digitalWrite(latchPin,HIGH);
extra = LED%2;
LED=LED/2;
extra = extra*128;
LED= LED+extra;
Serial.print(LED,BIN);
Serial.print(",");
Serial.println(extra, BIN);


delay(wait);

}

