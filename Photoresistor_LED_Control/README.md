# LDR LED Control using Arduino

## Description
This project uses a photoresistor (LDR) to detect light intensity and control two LEDs based on the measured light level.

The Arduino continuously reads the analog value from the LDR. If the light intensity is above the defined threshold, one LED turns ON while the other turns OFF. If the light intensity is below the threshold, the LED states are reversed.

## Components Required
- Arduino Uno
- Photoresistor (LDR)
- 10 kΩ Resistor
- 2 LEDs
- 2 Current-limiting Resistors (100 Ω , 220 Ω )
- Breadboard
- Jumper Wires

## Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| LDR Output | A0 |
| LED 1 | D8 |
| LED 2 | D7 |

## Working Principle
1. The LDR and a 10 kΩ resistor form a voltage divider.
2. Arduino reads the voltage from analog pin A0.
3. The analog value is displayed on the Serial Monitor.
4. If the analog value is greater than **200**:
   - LED on pin D8 turns ON.
   - LED on pin D7 turns OFF.
5. If the analog value is less than **200**:
   - LED on pin D8 turns OFF.
   - LED on pin D7 turns ON.

## Threshold Value
```cpp
200
```

The threshold can be adjusted according to the surrounding light conditions.

## Sample Code Logic
```cpp
if(lightval > 200){
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
}

if(lightval < 200){
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
}
```

## Output
- Displays the LDR sensor value on the Serial Monitor.
- Controls two LEDs according to the detected light intensity.

## Applications
- Automatic lighting system
- Light-sensitive indicator
- Smart home lighting
- Day/Night detection
- Basic light monitoring system

## License
This project is open-source and may be used for learning and educational purposes.