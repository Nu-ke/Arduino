int latchPin=11;
int clockPin=9;
int dataPin=12;
byte led=0xf0\;
int wait=500;
void setup() {
  // put your setup code here, to run once:
pinMode(latchPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin, HIGH);
shiftOut(dataPin,clockPin, LSBFIRST, led);
digitalWrite(latchPin,LOW);
led=255-led;
delay(wait);
}
