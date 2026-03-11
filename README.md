# ❤️ Custom ECG Acquisition System
<p align="center">
  <img src="figures/PCB_first.png" width="100%">
</p>

Design of a custom electrocardiogram (ECG) acquisition system including a dedicated analog front-end PCB with galvanic isolation, ESP32-based signal acquisition, and MATLAB visualization for cardiac signal analysis.

---

## 🚀 Project Overview

This project explores the development of a low-cost biomedical instrumentation system for measuring cardiac electrical activity.

The system integrates:

- Custom-designed ECG analog front-end PCB
- Galvanic isolation for patient safety
- ESP32-based data acquisition
- ADS1115 16-bit analog-to-digital converter
- Serial data transmission
- MATLAB-based signal visualization and processing

The objective of the project is to combine analog electronics, embedded systems and signal processing for physiological signal acquisition.

---

## ⚡ System Architecture

The acquisition chain is structured as follows:

ECG electrodes → Analog front-end PCB → ADS1115 ADC → ESP32 microcontroller → MATLAB visualization

<p align="center">
  <img src="hardware/pcb_design.png" width="60%">
</p>

The ESP32 reads the differential ECG signal from the ADS1115 and streams the data via serial communication for external visualization and processing.

---

## 🧠 Hardware Design

The system includes a custom PCB designed to acquire and condition the ECG signal.

Main hardware components:

- Instrumentation amplifier and analog filtering stages
- Galvanic isolation stage (ISO124)
- ADS1115 16-bit ADC
- ESP32 microcontroller interface

<p align="center">
  <img src="hardware/pcb_schematic.png" width="60%">
</p>

The PCB schematic and layout files are available in the `hardware/` folder.

---

## 💻 Firmware

The ESP32 firmware is written using the Arduino framework.

The microcontroller reads the differential voltage from the ADS1115 and sends the ECG signal through the serial port.

Example code:

```cpp
short diferencia_0_1 = ads.readADC_Differential_0_1();
float voltios = (diferencia_0_1 * factorEscala) / 1000.0;
Serial.println(voltios, 4);
