# Contributing to 3DFlexML

🎉 Welcome! Thank you for your interest in contributing to **3DFlexML**. This project aims to develop **3D-printed flexible sensors with TinyML** for various applications. Whether you're improving documentation, designing new sensors, or refining machine learning models, your contributions are greatly appreciated!

## 🚀 How to Contribute

### 1️⃣ Choose a Task
Check the **[Issues](https://github.com/ZeroOneTwo-CreativeTechnologyHub/3DFlexML/issues)** tab for open tasks. You can contribute by:
- Fixing **bugs** or **improving code**
- Designing new **3D-printable sensor models**
- Collecting and **sharing sensor data**
- Enhancing **TinyML models**
- Improving **documentation**

If you have a **new idea**, create a discussion in the **[Discussions](https://github.com/ZeroOneTwo-CreativeTechnologyHub/3DFlexML/discussions)** section!

### 2️⃣ Fork & Clone the Repository
1. **Fork** this repository by clicking the **Fork** button in GitHub.
2. Clone your forked repository:
   ```bash
   git clone https://github.com/YOUR-USERNAME/3DFlexML.git
   cd 3DFlexML
   ```

### 3️⃣ Create a New Branch
Before making changes, create a new branch:
```bash
git checkout -b feature-your-feature-name
```

### 4️⃣ Follow the Repository File Structure
To maintain consistency, follow this structure when adding new sensors or features:

```
3DFlexML/
│── README.md               # Main landing page
│── LICENSE                 # Open-source license
│── CONTRIBUTING.md         # Contribution guidelines
│── CODE_OF_CONDUCT.md      # Community guidelines
│── docs/                   # General documentation
│
├── 1_Example_Sensor/       # Example flexible sensor
│   ├── README.md           # Overview, setup, and usage
│   ├── hardware/           # 3D-printable files (STL, CAD)
│   ├── firmware/           # Arduino/TinyML code for sensor
│   ├── models/             # Trained TinyML models
│   ├── data/               # Collected sensor datasets
│   └── tests/              # Test scripts or validation code
│
├── 2_Innersole_Sensor/     # Flexible insole sensor
│   ├── README.md
│   ├── hardware/
│   ├── firmware/
│   ├── models/
│   ├── data/
│   └── tests/
│
└── examples/               # General examples for 3DFlexML
    ├── bend-detection/
    ├── gesture-recognition/
    ├── README.md
```

- Each **sensor folder** should include a `README.md` file explaining its design, use case, and setup.
- **Hardware files** (STL, CAD) go in the `/hardware/` subfolder.
- **Firmware and TinyML code** go in `/firmware/`.
- **Trained models** and **datasets** should be included when relevant.

### 5️⃣ Make Changes & Commit
- Follow best coding/documentation practices.
- Describe your changes clearly in commit messages:
  ```bash
  git commit -m "Added new bend sensor STL file"
  ```

### 6️⃣ Push Changes & Open a Pull Request
```bash
git push origin feature-your-feature-name
```
Then, go to the **[Pull Requests](https://github.com/ZeroOneTwo-CreativeTechnologyHub/3DFlexML/pulls)** tab in GitHub and click **New Pull Request**.

## 🔧 Development Guidelines
- Keep code **clean and well-documented**.
- For **3D models**, include printing guidelines.
- TinyML models should be **well-tested and include training data**.
- Follow the **folder structure** for consistency.

## 💬 Need Help?
If you have any questions, post in **[Discussions](https://github.com/ZeroOneTwo-CreativeTechnologyHub/3DFlexML/discussions)** or reach out via an issue.

🚀 **Thank you for contributing to 3DFlexML!**
