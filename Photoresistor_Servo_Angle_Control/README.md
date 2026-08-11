# Photoresistor Based Servo Angle Control

This Arduino project controls the angle of a servo motor based on the brightness of light detected by a photoresistor.

## Components Used

* Arduino
* Photoresistor
* Resistor
* Servo Motor
* Breadboard
* Jumper Wires

## Pin Configuration

| Component     | Arduino Pin |
| ------------- | ----------- |
| Photoresistor | A0          |
| Servo Motor   | D8          |

## Working Principle

The photoresistor detects the brightness of the surrounding light and produces an analog value. Arduino reads this value from pin A0 and converts it into a corresponding servo angle.

The servo angle depends on the brightness of the light. As the light intensity changes, the photoresistor reading changes, and the servo motor moves to a different angle.

The calculated angle is sent to the servo using:

```cpp
myServo.write(angle);
```

The servo angle is also displayed on the Serial Monitor.

## Serial Monitor

The Serial Monitor is configured at:

```text
9600 baud
```

The servo angle is updated every 500 ms.

## Features

* Uses a photoresistor to detect light brightness
* Controls servo angle according to light intensity
* Displays the servo angle on the Serial Monitor
* Provides automatic light-dependent servo movement
