# ❤️ Custom ECG Acquisition System

A medical-grade Electrocardiogram (ECG) acquisition system featuring a custom analog front-end with galvanic isolation, 16-bit digitization, ESP32 processing, and MATLAB visualization.

---

## ⚡ System Architecture

The acquisition chain is structured as follows:

```text
ECG Electrodes ➔ Analog Front-End PCB ➔ ADS1115 ADC ➔ ESP32 Microcontroller ➔ MATLAB Visualization
```

The ESP32 reads the differential ECG signal from the ADS1115 and streams the data via serial communication for external visualization and processing.

---

## 🧠 Hardware Design

The system includes a custom PCB designed to acquire and condition the ECG signal.

Main hardware components:
- Instrumentation amplifier and analog filtering stages (**TL082** and **INA114**)
- Galvanic isolation stage (**ISO124**)
- **ADS1115** 16-bit ADC
- **ESP32** microcontroller interface

---

## 📁 Repository Blueprint & Documentation

### 🛠️ Hardware Showcase
<p align="center">
  <img src="figures/PCB_first.png" width="100%">
</p>

The full schematic blueprints and board layout files are available below:
*   📄 **[View PCB Layout Blueprint (PDF)](figures/ECG_board.png)**
*   📄 **[View Schematic Diagram Blueprint (PDF)](figures/ECG_schematic.png)**

---

## 📁 Repository Structure

*   📁 **`code/`**: ESP32 firmware for data acquisition.
*   📁 **`hardware/`**: Native CAD design files (`.sch` and `.brd`).
*   📁 **`figures/`**: Visual documentation and export files.
