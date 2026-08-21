# Pushbutton as a Toggle Switch

## Description

This Arduino project uses a pushbutton as a toggle switch to control an LED. Each time the pushbutton is pressed, the LED changes its state. If the LED is OFF, pressing the button turns it ON, and pressing it again turns it OFF.

## Components Used

* Arduino Uno
* Pushbutton
* LED
* Resistor
* Breadboard
* Jumper wires

## Pin Configuration

* LED → Digital Pin 7
* Pushbutton → Digital Pin 9

## How It Works

The Arduino continuously reads the state of the pushbutton. It compares the previous button state with the current state to detect a new button press. When a new press is detected, the LED state is toggled between ON and OFF.

## Key Concept

The project uses **state change detection** to make a momentary pushbutton work like a toggle switch.

## Code

The Arduino program reads the pushbutton and changes the LED state whenever a new button press is detected.

## Result

* First button press → LED ON
* Second button press → LED OFF
* Third button press → LED ON
* Each new press toggles the LED state.
