int RSpeed = 2;
int RB = 0;
int RF = 4;
int LF = 5;
int LB = 3;
int LSpeed = 1;

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
  forward(0.5);
  turnLeft(0.5);
  backwards(0.5);
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
