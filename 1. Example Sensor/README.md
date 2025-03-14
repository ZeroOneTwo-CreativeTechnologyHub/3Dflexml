# 1_Example_Sensor

## 📌 Overview
This folder contains all necessary files to replicate the **Example Sensor**, a **3D-printed flexible sensor** designed for use with **TinyML**. This sensor demonstrates how **conductive TPU** and **machine learning** can work together to detect deformations such as bending, pressure, or stretching.

## 📂 Folder Structure
```
1_Example_Sensor/
│── README.md               # This document
│── hardware/               # 3D-printable files (STL, CAD)
│── firmware/               # Code for Arduino/TinyML integration
│── models/                 # Trained TinyML models
│── data/                   # Collected sensor datasets
│── tests/                  # Scripts for validation and testing
```

## 🛠️ Getting Started

### 🔹 Requirements
- **3D Printer:** e.g., Bambu Labs P1S
- **Conductive TPU Filament:** e.g., Recreus Conductive Filaflex Black, 1.75mm
- **Microcontroller:** Arduino Nano 33 BLE Sense or compatible
- **Software:**
  - Arduino IDE
  - Python 3.x (for data processing scripts)
  - 3D modeling software (e.g., Fusion 360)

### 🔹 Installation & Usage

1. **3D Print the Sensor:**
   - Open the 3D model file from the `hardware/` directory.
   - Slice the model using your preferred slicer software.
   - Print using conductive TPU filament.

2. **Set Up the Hardware:**
   - Follow the wiring diagram in the `hardware/` directory to connect the sensor to the microcontroller.

3. **Upload Firmware:**
   - Open `example_sensor.ino` from the `firmware/` directory in Arduino IDE.
   - Install required libraries (`Arduino_TensorFlowLite`, `Arduino_LSM9DS1`, etc.).
   - Upload the sketch to the microcontroller.

4. **Run the System:**
   - Open the Serial Monitor in Arduino IDE.
   - Interact with the sensor and observe real-time data and classifications.

### 🔬 Model Usage & Training
- The **trained TinyML model** in `models/` classifies different bending patterns.
- To **retrain the model**, follow the instructions in `models/training_notebook.ipynb`.
- The dataset used for training is stored in `data/processed_data.csv`.

## 📢 Contributing
If you improve the design, feel free to submit an update via **Pull Request**! See **[CONTRIBUTING.md](../../CONTRIBUTING.md)** for details.

🚀 **Happy experimenting with 3DFlexML!**
