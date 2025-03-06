# Model Guide for 1_Example_Sensor

## 📌 Overview
This folder contains **pre-trained TinyML models** for processing data from the **Example Sensor**. The models are designed to classify different sensor deformations, such as bending or pressure, and run efficiently on low-power microcontrollers like the **Arduino Nano 33 BLE Sense**.

## 📂 Files in This Folder
```
models/
│── README.md               # This document
│── model.tflite            # Pre-trained TinyML model
│── labels.txt              # Label map for classification
│── training_data.csv       # Example dataset used for training
│── training_notebook.ipynb # Jupyter Notebook for retraining the model
```

## 🛠️ Model Details
- **Format:** TensorFlow Lite (`.tflite`)
- **Input:** Sensor resistance values from conductive TPU sensor
- **Output:** Predicted deformation class (e.g., "bent left", "bent right", "pressed")
- **Training Dataset:** Included in `training_data.csv`

## 🔧 Using the Model
1. Ensure the **`model.tflite`** file is placed in the **firmware/** directory.
2. Modify `example_sensor.ino` to load the model during inference.
3. Deploy the firmware to your **Arduino Nano 33 BLE Sense**.
4. Monitor the **Serial Output** for classification results.

## 🔬 Retraining the Model (Optional)
If you want to improve accuracy or train on new sensor data:
1. Open `training_notebook.ipynb` in Jupyter Notebook.
2. Replace `training_data.csv` with new sensor readings.
3. Train the model using **Edge Impulse** or **TensorFlow**.
4. Export the new model as `.tflite` and replace the existing one.
5. Upload the updated model to your **microcontroller**.

## 🧪 Testing & Validation
- Use the **Serial Monitor** to check if classifications are accurate.
- If misclassification occurs, **increase training data diversity**.
- Try **different neural network architectures** in `training_notebook.ipynb`.

## 📢 Contributing
If you improve the model, submit an update via **Pull Request**! See **[CONTRIBUTING.md](../../CONTRIBUTING.md)** for details.

🚀 **Enhance 3DFlexML with better models!**
