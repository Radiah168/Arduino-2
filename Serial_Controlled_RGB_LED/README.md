# RGB LED Serial Color Control (Common Anode)

## Description
This Arduino project controls a Common Anode RGB LED using the Serial Monitor. The user enters a color name through the Serial Monitor, and the RGB LED changes to the selected color.

## Components Used
- Arduino UNO
- Common Anode RGB LED
- 3 × 220Ω  resistors
- Breadboard
- Jumper wires

## Pin Connections

| Arduino Pin | RGB LED |
|-------------|----------|
| D13 | Red |
| D8 | Green |
| D4 | Blue |
| 5V | Common Anode |

## Available Commands

- red
- green
- blue
- off

## How to Use

1. Upload the code to the Arduino.
2. Open the Serial Monitor.
3. Set the baud rate to **9600**.
4. Type one of the following commands:
   - red
   - green
   - blue
   - off
5. Press Enter.

## Notes

- This project is designed for a **Common Anode RGB LED**.
- Use **220Ω or 330Ω resistors** for better brightness.
- If colors appear incorrect, check the RGB pin connections.