int RB = 5;
int RF = 4;
int LF = 0;
int LB = 2;
int LSpeed = 14;
int RSpeed = 12;
void setup() {
  pinMode(LB, OUTPUT);
  pinMode(LF, OUTPUT);
  pinMode(RF, OUTPUT);
  pinMode(RB, OUTPUT);
  pinMode(LSpeed, OUTPUT);
  pinMode(RSpeed, OUTPUT);
  digitalWrite(LB, LOW);
  digitalWrite(LF, LOW);
  digitalWrite(RF, LOW);
  digitalWrite(RB, LOW);
  analogWrite(LSpeed, 1000);
  analogWrite(RSpeed, 1000);
  }

void loop() {
  delay(3000);
  turnRight(0.5);
  delay(10000);
}

void turnRight(float seconds){
  digitalWrite(RB, 1);
  digitalWrite(RF, 0);
  digitalWrite(LB, 0);
  digitalWrite(LF, 1);
  delay(seconds*1000);
  digitalWrite(RB, 0);
  digitalWrite(RF, 0);
  digitalWrite(LB, 0);
  digitalWrite(LF, 0);
}

void turnLeft(float seconds){
  digitalWrite(RB, 0);
  digitalWrite(RF, 1);
  digitalWrite(LB, 1);
  digitalWrite(LF, 0);
  delay(seconds*1000);
  digitalWrite(RB, 0);
  digitalWrite(RF, 0);
  digitalWrite(LB, 0);
  digitalWrite(LF, 0);
}

void forward(float seconds){
  digitalWrite(RB, 0);
  digitalWrite(RF, 1);
  digitalWrite(LB, 0);
  digitalWrite(LF, 1);
  delay(seconds*1000);
  digitalWrite(RB, 0);
  digitalWrite(RF, 0);
  digitalWrite(LB, 0);
  digitalWrite(LF, 0);
}


void backwards(float seconds){
  digitalWrite(RB, 1);
  digitalWrite(RF, 0);
  digitalWrite(LB, 1);
  digitalWrite(LF, 0);
  delay(seconds*1000);
  digitalWrite(RB, 0);
  digitalWrite(RF, 0);
  digitalWrite(LB, 0);
  digitalWrite(LF, 0);
}
