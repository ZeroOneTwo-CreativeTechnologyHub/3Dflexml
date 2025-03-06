# Firmware Guide for 1_Example_Sensor

## 📌 Overview
This folder contains the **Arduino firmware** required to interface the **Example Sensor** with a microcontroller and process data using **TinyML**. The firmware reads signals from the **3D-printed conductive TPU sensor**, processes them, and performs real-time classification.

## 📂 Files in This Folder
```
firmware/
│── README.md               # This document
│── example_sensor.ino      # Arduino sketch for reading sensor data
│── model.tflite            # Pre-trained TinyML model for classification
│── data_logging.ino        # Script to collect raw sensor data
│── libraries/              # Required external libraries
```

## 🛠️ Requirements
### 🔹 Hardware
- **Arduino Nano 33 BLE Sense** (or compatible board with BLE & IMU)
- **Conductive TPU sensor** (printed from `hardware/` folder)
- **Jumper wires & resistors** (for voltage divider circuit)

### 🔹 Software
- **Arduino IDE** (latest version)
- **TensorFlow Lite for Microcontrollers**
- **Edge Impulse** (optional, for retraining models)
- **Required libraries** (see installation below)

## 🔧 Installation & Setup
### 1️⃣ Install Arduino Libraries
Before uploading the firmware, install the required libraries in **Arduino IDE**:
```cpp
#include <Arduino_TensorFlowLite.h>
#include <Arduino_LSM9DS1.h>
#include <Wire.h>
```
To install them, go to **Sketch > Include Library > Manage Libraries** and search for:
- TensorFlow Lite for Microcontrollers
- LSM9DS1 (IMU sensor library)

### 2️⃣ Upload Data Logging Sketch
1. Connect your **Arduino Nano 33 BLE Sense** via USB.
2. Open `data_logging.ino` and upload it to the board.
3. Start the **Serial Monitor** to view raw sensor readings.
4. Collect data by bending the sensor in different ways and **save the output**.

### 3️⃣ Train & Deploy TinyML Model (Optional)
If you want to retrain the model:
1. Upload your collected sensor data to **Edge Impulse** or **TensorFlow**.
2. Train a classification model for different bending patterns.
3. Export the trained `.tflite` model and replace `model.tflite` in this folder.

### 4️⃣ Upload Example Sensor Firmware
1. Open `example_sensor.ino` in **Arduino IDE**.
2. Ensure the **model.tflite** file is in the same directory.
3. Compile and upload the firmware.
4. Open the **Serial Monitor** to see the detected bending classifications.

## 🧪 Testing & Debugging
- Use the **Serial Plotter** to visualise real-time sensor values.
- If values are unstable, check wiring and adjust the **resistor values**.
- If inference is incorrect, **retrain the model** with more diverse data.

## 📢 Contributing
If you improve the firmware or add new features, submit a **Pull Request**! See **[CONTRIBUTING.md](../../CONTRIBUTING.md)** for guidelines.

🚀 **Start experimenting with TinyML on 3DFlexML!**
