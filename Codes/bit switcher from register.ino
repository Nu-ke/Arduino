int dataPin=12;
int latchPin=11;
int clockPin=9;
byte led=0x11;
int wait=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(dataPin, OUTPUT);
pinMode(latchPin, OUTPUT);
pinMode(clockPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin, HIGH);
shiftOut(dataPin,clockPin,LSBFIRST,led);
digitalWrite(latchPin, LOW);
led = led*16+led/16;
delay(wait);
}
