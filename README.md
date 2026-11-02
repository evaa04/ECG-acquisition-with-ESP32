# ❤️ Custom ECG Acquisition System

<p align="center">
  <img src="figures/PCB_first.png" width="100%">
</p>

Design of a custom electrocardiogram (ECG) acquisition system including a dedicated analog front-end PCB with galvanic isolation, ESP32-based signal acquisition, and MATLAB visualization for cardiac signal analysis.

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

## 📁 Engineering Blueprints & Documentation

The complete technical design documentation is available for viewing and download below:

*   📄 **[View PCB Layout Blueprint (PDF)](figures/pcb_design.pdf)**
*   📄 **[View Schematic Diagram Blueprint (PDF)](figures/pcb_schematic.pdf)**

The native CAD design files (`.sch` and `.brd`) are also available directly in the root of the repository.
