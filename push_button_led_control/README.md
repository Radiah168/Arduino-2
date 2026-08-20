# Push Button LED Control

This project controls an LED using a push button with Arduino.

## Components Used
- Arduino Uno
- Push Button
- LED
- Resistor
- Breadboard
- Jumper Wires

## Pin Configuration
- LED → Digital Pin 7
- Push Button → Digital Pin 9

## Working Principle
The Arduino reads the state of the push button using digital pin 9.
If the button value is HIGH, the LED is turned OFF.
If the button value is LOW, the LED is turned ON.

The button state is also displayed on the Serial Monitor at 9600 baud rate.

## Features
- Controls an LED using a push button
- Reads digital input from the button
- Displays button status on Serial Monitor
- Simple digital input/output project