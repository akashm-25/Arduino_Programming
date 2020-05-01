#include <dht11.h>
#define dhtPin 2
dht11 myDHT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hopefully we will get the DHT value");
  int dhtCheck = myDHT.read(dhtPin);
  Serial.print("Humidity is =");
  Serial.println(float(myDHT.humidity),2);
  Serial.print("Temperature is =");
  Serial.println(float(myDHT.temperature),2);
  delay(2500);
}
