/*

*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("light: ");
  Serial.println(sensorValue);

  int percentage = map(sensorValue, 0, 1023, 0, 100);

  Serial.print("light percentage: ");
  Serial.print(percentage);
  Serial.println(" % ");

  delay(1000);
}
