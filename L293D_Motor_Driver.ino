//L293D
//Motor A
const int motorPinA1  = 5;  // Pin 14 of L293
const int motorPinA2  = 6;  // Pin 10 of L293
//Motor B
const int motorPinB1  = 10; // Pin  7 of L293
const int motorPinB2  = 9;  // Pin  2 of L293


void setup(){
    //sets pins as outputs
    pinMode(motorPinA1, OUTPUT);
    pinMode(motorPinA2, OUTPUT);
    pinMode(motorPinB1, OUTPUT);
    pinMode(motorPinB2, OUTPUT);
    
    //Stop all motors at start
    turnOffAll();
}


void loop(){
  moveMotorA(true, false); //turns motor A on in clockwise rotation
  delay(1000);
  moveMotorA(true, true); //turns motor A off in clockwise rotation
  moveMotorA(false, false); //turns motor A on in counter clockwise rotation
  delay(1000);
  moveMotorA(false, true); //turns motor A off in counter clockwise rotation
  moveMotorB(true, false); //turns motor B on in clockwise rotation
  delay(1000);
  moveMotorB(true, true); //turns motor B off in clockwise rotation
  moveMotorB(false, false); //turns motor B on in counter clockwise rotation
  delay(1000);
  moveMotorB(false, true); //turns motor B off in counter clockwise rotation
  turnOffAll(); //turns off both motors
  delay(1000);
}

//moves motor A
//takes params: clockwise and stop
// if clockwise is true then it will spin motor in a clockwise rotation
// if clockwise is false then it will spin motor in a counter clockwise rotation
//if stop is true then it will stop the motor by setting pin to LOW
//if stop is false then it will start the motor by setting pin to HIGH
void moveMotorA(bool clockwise, bool stop){
  if(clockwise){
    stop ? digitalWrite(motorPinA1, LOW) : digitalWrite(motorPinA1, HIGH);
  }else{
    stop ? digitalWrite(motorPinA2, LOW) : digitalWrite(motorPinA2, HIGH);
  }
}

//moves motor B
//takes params: clockwise and stop
// if clockwise is true then it will spin motor in a clockwise rotation
// if clockwise is false then it will spin motor in a counter clockwise rotation
//if stop is true then it will stop the motor by setting pin to LOW
//if stop is false then it will start the motor by setting pin to HIGH
void moveMotorB(bool clockwise, bool stop){ 
  if(clockwise){
    stop ? digitalWrite(motorPinB1, LOW) : digitalWrite(motorPinB1, HIGH);
  }else{
    stop ? digitalWrite(motorPinB2, LOW) : digitalWrite(motorPinB2, HIGH);
  } 
}

void turnOffAll(){ //turns off both motors
  digitalWrite(motorPinA1, LOW);
  digitalWrite(motorPinA2, LOW);
  digitalWrite(motorPinB1, LOW);
  digitalWrite(motorPinB2, LOW);
}
