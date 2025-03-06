# Data Guide for 1_Example_Sensor

## 📌 Overview
This folder contains **raw and processed sensor data** used to train the TinyML model for the **Example Sensor**. The dataset consists of resistance values captured from the **3D-printed conductive TPU sensor**, which are labelled for machine learning classification.

## 📂 Files in This Folder
```
data/
│── README.md               # This document
│── raw_data.csv            # Unprocessed sensor readings
│── processed_data.csv       # Cleaned & formatted data for training
│── data_collection_notes.md # Notes on how data was gathered
│── dataset_visualisation.png # Graph showing sensor response patterns
```

## 🛠️ Collecting Data
To collect new sensor data:
1. Upload the `data_logging.ino` sketch from the `firmware/` folder to your **Arduino Nano 33 BLE Sense**.
2. Open the **Serial Monitor** and record sensor output while performing different movements.
3. Save the output as a `.csv` file.
4. Label the data manually or using a **Python script**.

## 🔄 Processing Data
To clean and prepare data for training:
1. Remove noisy or inconsistent readings.
2. Normalize values if needed.
3. Split data into **training and testing sets**.
4. Save as `processed_data.csv` for use in model training.

## 📊 Visualising Data (optional)
Use Python libraries like **Matplotlib** or **Pandas** to generate visualisations:
```python
import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("processed_data.csv")
plt.plot(data["time"], data["sensor_value"], label="Sensor Output")
plt.legend()
plt.show()
```

## 🏗️ Future Improvements
- Collect a larger dataset for improved model accuracy.
- Add **automated labelling** using predefined thresholds.
- Experiment with different feature extraction techniques.

## 📢 Contributing
If you collect better datasets, feel free to submit them via **Pull Request**! See **[CONTRIBUTING.md](../../CONTRIBUTING.md)** for details.

🚀 **Help refine 3DFlexML with better data!**
