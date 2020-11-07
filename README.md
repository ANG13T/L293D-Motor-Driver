# L293D-Motor-Driver

This projects lets you control two motors either in a clockwise or counterclockwise rotation with the help of L293D!

## Materials

- Breadboard
- 2 DC Motors
- Arduino Uno
- Around 15 - 20 jumper wires
- L293D

## Schematic

![design image](https://github.com/angelina-tsuboi/LCD_Visual_Display/blob/main/images/base_design.png)

## How It Works

I will describe the functionalities of the two most essential components of this project + code, and relate how they contribute to the overall project. 

### L293D Functionality

 The digital pins of the Arduino detect the presence or 

### DC Motor Functionality

 The digital pins of the Arduino detect the presence or 

### Code Review

We set the motor pins as outputs.
```
pinMode(motorPinA1, OUTPUT);
pinMode(motorPinA2, OUTPUT);
pinMode(motorPinB1, OUTPUT);
pinMode(motorPinB2, OUTPUT);
``` 

The *turnOffAll* function sets all the motor output pins to LOW therefore turning off all the motors.

```
void turnOffAll(){
  digitalWrite(motorPinA1, LOW);
  digitalWrite(motorPinA2, LOW);
  digitalWrite(motorPinB1, LOW);
  digitalWrite(motorPinB2, LOW);
}
```

The **moveMotorA** and **moveMotorB** functions either turn off or turn on their respective motors either in a clockwise or counterclock wise rotation. Both functions take in the *stop* and *clockwise* parameters. The stop parameter determines whether the motor will turn off or on while the clockwise parameter dictates which direction the motor spins (true: clockwise, false: counter clockwise).

IE.
```
void moveMotorB(bool clockwise, bool stop){ 
  if(clockwise){
    stop ? digitalWrite(motorPinB1, LOW) : digitalWrite(motorPinB1, HIGH);
  }else{
    stop ? digitalWrite(motorPinB2, LOW) : digitalWrite(motorPinB2, HIGH);
  } 
}
```

Inside the *loop* function we rotate motor A and motor B clockwise and counterclock with one second intervals between.


## Completed Project

![project photo](https://github.com/angelina-tsuboi/LCD_Visual_Display/blob/main/images/completed-project.jpg)