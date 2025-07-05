# Industrial Fire Safety System

## Overview
This project is an **Industrial Fire Safety System** designed to detect and alert in case of a fire or gas leak within industrial environments. The system uses an MQ2 gas sensor and an ambient light sensor (as a substitute for a flame sensor) to monitor environmental conditions. When dangerous thresholds are detected, the system triggers a buzzer alert and displays warning messages using a 16x2 LCD.

---

## Table of Contents
- [Overview](#overview)
- [Getting Started](#getting-started)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Files Included](#files-included)
- [Demo Video](#demo-video)
- [Contributing](#contributing)
- [License](#license)

---

## Getting Started
To build and simulate this project, follow the setup steps below using Tinkercad or physical hardware.

---

## Hardware Requirements
- Arduino Uno microcontroller  
- MQ2 Gas Sensor  
- Ambient Light Sensor (flame substitute)  
- 16x2 LCD Display  
- Buzzer  
- 10kΩ Potentiometer (for LCD contrast)  
- Breadboard  
- Jumper wires  
- USB A to B Cable

---

## Software Requirements
- Arduino IDE  
- Tinkercad Circuits (for simulation)  

---

## Installation
1. Connect the hardware components as per the circuit diagram in the `Simulated_Circuit_Diagram` file.
2. Open the Arduino code file (`fire_safety_system.ino`) from the `industrial_fire_safety_system_arduino_code.ino\` directory.
3. Upload the code to the Arduino Uno using Arduino IDE.
4. Power the microcontroller – the system starts automatically.

---

## Usage
- The system continuously reads values from the **MQ2 Gas Sensor** and **Ambient Light Sensor**.
- If smoke levels (MQ2) are above 500 **or** light level drops below 300 (indicating fire):
  - Buzzer sounds an alert.
  - LCD displays "ALERT!" along with sensor values.
- If safe, the LCD simply shows real-time sensor values without alert.

---

## Files Included


- **Arduino Code**  
  Contains the Arduino code for interfacing the MQ2 gas sensor, ambient light sensor, LCD, and buzzer.

- **Gerber File**  
  Includes the PCB design files for the fire alert system.

- **Detailed Project Report**  
  Comprehensive report detailing the project.

- **Demo Video**  
  A demonstration video showing the simulation and working of the fire safety system.

---

## Demo Video
Watch the demonstration video of the working prototype here:  
*(https://drive.google.com/file/d/1xjMqNlr-fg3ck-SjrcaTHwm4U2UuRilz/view?usp=drive_link)*

---

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request.

---

## License
This project is open-source and free to use, modify, and distribute for educational and development purposes.

---

