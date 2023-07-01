#include <DHT.h>
#define Type DHT11
int sensePin=2;
int setTime=500;
int wait=500;
DHT HT(sensePin,Type);
float humidity;
float tempc;
float tempf;
 void setup() {
   Serial.begin(9600);
   HT.begin();
   delay(setTime);
 }
void loop() {
humidity= HT.readHumidity();
tempc= HT.readTemperature();
tempf= HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print(",");
Serial.print("Temperature :");
Serial.print(tempc);
Serial.print(" *C ");
Serial.print(tempf);
Serial.println(" *F ");
delay(wait);
}