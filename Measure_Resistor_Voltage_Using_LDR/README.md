# Photoresistor (LDR) Voltage Monitoring

## Objective
To measure the voltage across a resistor connected with a photoresistor (LDR) using the Arduino's analog input and display the corresponding ADC value on the Serial Monitor.

## Components Used
- Arduino Uno
- Photoresistor (LDR)
- 10 kΩ Resistor
- Breadboard
- Jumper Wires

## Circuit Description
- The LDR and a fixed resistor are connected as a voltage divider.
- The junction of the LDR and resistor is connected to analog pin A0.
- Arduino reads the analog voltage at A0 and prints the ADC value to the Serial Monitor.

## Working Principle
- When the light intensity changes, the resistance of the LDR changes.
- This changes the voltage across the resistor in the voltage divider.
- Arduino converts the analog voltage (0–5 V) into a digital value (0–1023) using its 10-bit ADC.
- The measured value is displayed on the Serial Monitor every 500 ms.

## Pin Connection

| Arduino Pin | Connection |
|-------------|------------|
| A0 | Junction of LDR and resistor |

## Output
The Serial Monitor displays analog values between **0 and 1023**, representing the voltage across the resistor.

