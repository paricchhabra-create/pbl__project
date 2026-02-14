#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

int mq135Pin = 34;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  int airQuality = analogRead(mq135Pin);
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Air Quality Value: ");
  Serial.println(airQuality);

  Serial.print("Temperature: ");
  Serial.println(temperature);

  Serial.print("Humidity: ");
  Serial.println(humidity);

  delay(2000);
}
