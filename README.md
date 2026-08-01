# Servo Motor and Ultrasonic Sensor Project

## Overview

The project demonstrates the integration of an Arduino Uno, HC-SR04 Ultrasonic Sensor, Servo Motor, and an LED indicator.

The project was completed in two parts:

- Hardware Implementation: The circuit was built and tested using real Arduino components.
- Simulation: The same project was recreated and tested using Tinkercad.

The system continuously monitors the distance in front of the ultrasonic sensor. When an object is detected within 10 cm, the servo motor immediately returns to its starting position and waits until the obstacle is removed. Once the path is clear, the servo resumes its sweeping movement.

---

## Task Objective

Connect a Servo Motor with an HC-SR04 Ultrasonic Sensor using Arduino.

### Required Behavior

- The servo continuously sweeps between 0° and 180°.
- The ultrasonic sensor continuously measures the distance.
- If an object is detected at 10 cm or less:
  - The servo immediately returns to the home position (0°).
  - The servo remains stopped while the object is present.
- Once the obstacle is removed:
  - The servo resumes its normal sweeping motion.

---

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor (SG90)
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard

---

## Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| Servo Signal | D6 |
| Ultrasonic Trig | D9 |
| Ultrasonic Echo | D10 |
| Servo VCC | 5V |
| Servo GND | GND |
| Sensor VCC | 5V |
| Sensor GND | GND |

---

## Project Workflow

1. The Arduino sends a trigger pulse to the HC-SR04 sensor.
2. The sensor measures the distance to the nearest object.
3. The servo motor sweeps continuously between 0° and 180°.
4. If an obstacle is detected within 10 cm:
   - The servo immediately returns to the starting position.
   - The servo remains stopped until the obstacle is removed.
5. When the distance becomes greater than 10 cm:
   - The servo resumes sweeping normally.

---

## Hardware Implementation

The circuit was assembled using real Arduino components and tested successfully. An LED was added in the hardware implementation as a visual indicator. The LED turns on when the ultrasonic sensor detects an object within 10 cm and turns off when the object moves away.
Hardware Demonstration Video

📹 Add hardware demonstration video here:
[Hardware Demo Video](https://drive.google.com/file/d/1NC3FVku38GeBtB8TtlVMRbdKxIQwxGIy/view?usp=sharing)

---

## Tinkercad Simulation

The project was also implemented and tested using the Tinkercad simulator to verify the circuit and program behavior.

### Tinkercad Project

🔗 Add your Tinkercad project link here:
[Tinkercad Project Link](https://www.tinkercad.com/things/h8jeuYQSxQh-dazzling-esboo?sharecode=1Td5EKSyzchyiiLBKHigtm7rs1_0-AGdwxsFe0SObr8)

### Simulation Video

📹 Add Tinkercad simulation video here:
[Tinkercad Simulation Video](https://drive.google.com/file/d/1udIEVkS7gD-ACwsWUuOPe1KqjbjANk94/view?usp=sharing)

---

## Expected Output

- Servo sweeps continuously from 0° to 180°.
- Ultrasonic sensor continuously measures distance.
- Servo stops immediately when an object is detected within 10 cm.
- Servo returns to its home position while the object remains in front of the sensor.
- Servo resumes sweeping automatically after the obstacle is removed.

---

## Technologies Used

- Arduino IDE
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Tinkercad

---

