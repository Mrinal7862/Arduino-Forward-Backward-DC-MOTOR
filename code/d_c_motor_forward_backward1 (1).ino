// Pin definitions
const int IN1 = 8;
const int IN2 = 9;
const int ENA = 5;   // PWM pin

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  Serial.begin(9600);
  // No text here for Plotter, only numbers work best
}

void loop() {
  moveForward(180);
  plotData(180, 1);   // speed, direction(1 = forward)
  delay(10000);

  stopMotor();
  plotData(0, 0);     // stopped
  delay(1000);

  moveBackward(180);
  plotData(180, -1);  // backward
  delay(10000);

  stopMotor();
  plotData(0, 0);
  delay(2000);
}

// -------- Motor Control Functions --------

void moveForward(int speed) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, speed);
}

void moveBackward(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, speed);
}

void stopMotor() {
  analogWrite(ENA, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

// -------- Plot Function --------
// Send numbers only, comma-separated (Serial Plotter friendly)
void plotData(int speed, int direction) {
  Serial.print(speed);
  Serial.print(",");
  Serial.println(direction);
}
