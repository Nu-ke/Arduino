#include <DHT.h>
#include <LiquidCrystal.h>
#define Type DHT11
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int count =0;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int sensePin=2;
int setTime=500;
int wait=100;
DHT HT(sensePin,Type);
float humidity;
float tempc;
float tempf;
 void setup() {
   Serial.begin(9600);
   HT.begin();
   delay(setTime);
   lcd.begin(16,2);
 }
void loop() {
humidity= HT.readHumidity();
tempc= HT.readTemperature();
tempf= HT.readTemperature(true);
lcd.setCursor(0,0);
lcd.print("Temperature ");
lcd.print(tempc);
lcd.setCursor(0,1);
lcd.print("Humidity : ");
lcd.print(humidity);

}