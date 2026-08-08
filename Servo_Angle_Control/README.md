# Servo Angle Control

This Arduino project controls the position of a servo motor using input from the Serial Monitor.

## Components
- Arduino
- Servo Motor
- Jumper Wires

## Working Principle
The Arduino asks the user to enter an angle through the Serial Monitor.
The entered angle is read using `Serial.parseInt()` and sent to the servo motor using `my_servo.write()`.

## Servo Pin
- Servo signal pin → Digital Pin 8

## Usage
1. Upload the code to Arduino.
2. Open the Serial Monitor at 9600 baud.
3. Enter an angle between 0° and 180°.
4. The servo motor moves to the entered angle.

## Example
Input: `90`
Output: Servo moves to 90°.