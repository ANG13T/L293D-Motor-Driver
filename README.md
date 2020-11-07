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

 A L293D is a IC used as a frequent motor driver. With the help of 16 pins the IC can control/determine the rotation of up to two DC motors simultaneously. For this project, we connected some digital output wires to the L293D in order to control the two DC motors. Furthermore, we connected the wires of the DC motor to some pins of the L293D in order to spin upon a HIGH current from the digital output.

### DC Motor Functionality

A DC motor (Direct Current motor) is an extremely common motor with a myriad of applications. DC motors usually contain two leads (one for the positive end and the other for the negative end). Switching the input of the leads will make the motor in the opposite direction. In this project we control two DC motors using the pins of the L293D. The arduino sends current to the pins via its digital pins. If the current is low on both pins of a motor, it will not spin. While sending a HIGH current to either of its pins, will cause it to spin in a particular rotation.

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

## Sources

[tutorialspoint source](https://www.tutorialspoint.com/arduino/arduino_dc_motor.htm)
