int trigger=2;
int echo=7;
float pingTravelTime;
float distance;
void setup() {
  // put your setup code here, to run once:
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigger,LOW);
delayMicroseconds(10);
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
digitalWrite(trigger,LOW);
pingTravelTime=pulseIn(echo,HIGH);
Serial.print(pingTravelTime);
distance = pingTravelTime*343/10000;
Serial.print(",");
Serial.println(distance);
delay(25);


}
