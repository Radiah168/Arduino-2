# RGB LED Multiple Color Control using Arduino

## Description
This Arduino project controls a Common Anode RGB LED through the Serial Monitor. By entering different color names, the RGB LED displays primary and mixed colors using digital and PWM outputs.

## Components Used
- Arduino UNO
- Common Anode RGB LED
- 3 × 220Ω (or 330Ω) resistors
- Breadboard
- Jumper wires

## Pin Connections

| Arduino Pin | RGB LED Pin |
|-------------|-------------|
| D13 | Red |
| D8 | Green |
| D4 | Blue |
| 5V | Common Anode |

## Supported Commands

- red
- green
- blue
- yellow
- cyan
- magenta

## How It Works

1. Upload the sketch to the Arduino.
2. Open the Serial Monitor.
3. Set the baud rate to **9600**.
4. Type a color name and press **Enter**.
5. The RGB LED changes to the selected color.

## Features

- Serial Monitor color selection
- Displays primary RGB colors
- Displays mixed colors (Yellow, Cyan, Magenta)
- Simple RGB LED control using Arduino

## Note

- This project is designed for a **Common Anode RGB LED**.
- Use **220Ω or 330Ω** resistors for better LED brightness.
- If colors appear incorrect, check the RGB pin wiring.