# ❤️ Custom ECG Acquisition System
<p align="center">
  <img src="figures/PCB_first.png" width="100%">
</p>

Design of a custom electrocardiogram (ECG) acquisition system including a dedicated analog front-end PCB with galvanic isolation, , ESP32-based signal acquisition, and MATLAB visualization for cardiac signal analysis.

---

## ⚡ System Architecture

The acquisition chain is structured as follows:

ECG electrodes → Analog front-end PCB → ADS1115 ADC → ESP32 microcontroller → MATLAB visualization

<p align="center">
  <img src="figures/ECG_scheatic.pdf" width="60%">
</p>

The ESP32 reads the differential ECG signal from the ADS1115 and streams the data via serial communication for external visualization and processing.

---

## 🧠 Hardware Design

The system includes a custom PCB designed to acquire and condition the ECG signal.

Main hardware components:

- Instrumentation amplifier and analog filtering stages (TL082 and INA114)
- Galvanic isolation stage (ISO124)
- ADS1115 16-bit ADC
- ESP32 microcontroller interface

<p align="center">
  <img src="figures/ECG_board.pdf" width="60%">
</p>

The PCB schematic and layout files are available in the repository
