const int gasSensorPin = A0;  // MQ-5 analog pin
const int ledPin = 8;         // LED connected to digital pin 8
const int threshold = 90;    // Set your desired gas level threshold

void setup() {
  pinMode(gasSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(gasSensorPin); // Read MQ-5 value

  Serial.print("Gas Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue >= threshold) {
    digitalWrite(ledPin, HIGH);  // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED
  }

  delay(1000);  // Wait 1 second
}