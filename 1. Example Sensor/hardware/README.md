# Hardware Guide for 1_Example_Sensor

## 📌 Overview
This folder contains all the necessary **3D-printable files** and **assembly instructions** for the **Example Sensor**. The sensor is designed using **conductive TPU** to enable flexible, deformable sensing applications.

## 📂 Files in This Folder
```
hardware/
│── README.md               # This document
│── sensor_model.stl        # 3D-printable STL file
│── sensor_model.step       # STEP file for modifications
│── wiring_diagram.png      # Connection diagram for integration
│── SAFETY.md               # Safety considerations for Conductive TPU
```

## 🖨️ 3D Printing Instructions
### 🔹 Printer Requirements
- **FDM 3D printer** (capable of handling **conductive TPU**)
- **Nozzle size:** 0.4mm or larger (recommended)
- **Bed temperature:** 50-60°C
- **Print speed:** 20-30mm/s (adjust based on filament properties)
- **Layer height:** 0.2mm (optimal for flexibility and conductivity)

### 🔹 Printing Steps
1️⃣ Load **conductive TPU filament** into your printer.  
2️⃣ Ensure your printer settings match the recommended parameters.  
3️⃣ Print the provided **sensor_model.stl** file.  
4️⃣ Once printed, check the conductivity of the traces using a **multimeter**.

## 🔌 Wiring & Assembly
1️⃣ Follow the **wiring_diagram.png** to connect the sensor to an **Arduino Nano 33 BLE Sense**.  
2️⃣ Use **flexible jumper wires** or **soldering** (if necessary) for stable connections.  
3️⃣ Ensure proper grounding and avoid excessive bending in critical areas.  

## ⚠️ Safety Considerations
- **Ventilation:** Use adequate ventilation when printing, as fumes from melted TPU should not be inhaled.  
- **Handling:** Avoid excessive dust formation when handling or cutting the material.  
- **Burn Risk:** Molten Conductive TPU can cause burns—handle with care when removing from the print bed.  
- **Fire Safety:** In case of fire, use **water, foam, or dry chemical extinguishers**. Do not inhale fumes.  
- **Storage:** Keep filament **dry and below 40°C** to prevent degradation.

## 🛠️ Troubleshooting
- **Low conductivity?** Increase infill density or adjust printing temperature.  
- **Poor adhesion?** Use a **flexible build plate** or apply adhesive to the bed.  
- **Sensor not responding?** Verify connections and check resistance using a multimeter.

## 📢 Contributing
If you improve the design, feel free to submit an update via **Pull Request**! See **[CONTRIBUTING.md](../../CONTRIBUTING.md)** for details.

🚀 **Happy Printing with 3DFlexML!**
