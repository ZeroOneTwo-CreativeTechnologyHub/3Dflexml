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
### 🔹 Hardware Requirements
- **3D printer** (capable of printing **conductive TPU**)
- **Arduino Nano 33 BLE Sense** (or compatible board)
- **Conductive TPU filament**
- **Standard wiring and connectors**

### 🔹 Software Requirements
- **Arduino IDE** (latest version)
- **TensorFlow Lite for Microcontrollers**
<!-- - **Additional required libraries** (see `firmware/README.md` for details) -->

## 🏗️ Assembly & Printing
1️⃣ Print the sensor using the provided **STL/CAD** files in the `hardware/` folder.  
2️⃣ Ensure proper conductivity in the printed traces.  
3️⃣ Connect the sensor to the **Arduino Nano 33 BLE Sense** following the wiring diagram in `hardware/README.md`.   

## 💻 Firmware & TinyML Model
- The **firmware** in `firmware/` reads sensor data and runs **TinyML inference**.
- The **trained model** in `models/` has been trained to detect basic deformations.
- Data used for training is stored in `data/`.

## 🧪 Testing
- Use test scripts in `tests/` to verify sensor functionality.
- Modify the TinyML model as needed for improved accuracy.

## 📢 Contributing
Feel free to suggest improvements or contribute by submitting a **Pull Request**! See the main **[CONTRIBUTING.md](../CONTRIBUTING.md)** file for guidelines.

🚀 **Happy experimenting with 3DFlexML!**

