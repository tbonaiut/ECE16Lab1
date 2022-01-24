const int X_PIN = A3;
const int Y_PIN = A4;
const int Z_PIN = A5;

void setupAccelSensor() {
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
}

void readAccelSensor() {
  ax = analogRead(X_PIN);
  ay = analogRead(Y_PIN);
  az = analogRead(Z_PIN);
}
