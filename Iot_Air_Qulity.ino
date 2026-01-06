int airSensor = A0;
int led = 8;
int buzzer = 9;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int airValue = analogRead(airSensor);
  Serial.println(airValue);

  if (airValue > 400) {   // Threshold (calibrate)
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}
