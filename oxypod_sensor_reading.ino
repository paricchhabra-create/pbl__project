// Pin Definitions
int gasPin = A0;        // Gas sensor
int tempPin = A1;       // Temperature sensor
int ledPin = 7;         // LED
int buzzerPin = 8;      // Buzzer

// Threshold values
int gasThreshold = 400;     // Adjust if needed
float tempThreshold = 35.0; // 35°C limit

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  // ----- GAS SENSOR -----
  int gasValue = analogRead(gasPin);

  // ----- TEMPERATURE SENSOR (LM35 type) -----
  int tempValue = analogRead(tempPin);
  float voltage = tempValue * (5.0 / 1023.0);
  float temperature = voltage * 100.0;  // LM35 formula

  // Print values
  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print("  |  Temp: ");
  Serial.println(temperature);

  // ----- CONDITION -----
  if (gasValue > gasThreshold || temperature > tempThreshold) {
    
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);  // Sound buzzer
    
  } else {
    
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(1000);
}
