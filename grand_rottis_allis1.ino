int gasSensor = A0;     // Gas sensor connected to A0
int ledPin = 7;         // LED connected to pin 7
int buzzerPin = 8;      // Buzzer connected to pin 8

int threshold = 400;    // Pollution limit (you can change this)

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  int gasValue = analogRead(gasSensor);

  Serial.print("Pollution Level: ");
  Serial.println(gasValue);

  if (gasValue > threshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000);
}
int gasSensor = A0;     // Gas sensor connected to A0
int ledPin = 7;         // LED connected to pin 7
int buzzerPin = 8;      // Buzzer connected to pin 8

int threshold = 400;    // Pollution limit (you can change this)

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  int gasValue = analogRead(gasSensor);

  Serial.print("Pollution Level: ");
  Serial.println(gasValue);

  if (gasValue > threshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000);
}
