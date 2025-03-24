#define SERIESRESISTOR 10000    // The value of the 'other' resistor
#define STRETCHPIN A0           // Pin connected to the sensor

const int samplingRate = 100;   // Sampling rate in Hz (10ms interval)

String label = "idle";          // Default label
bool recording = false;         // Flag for recording state

void setup() {
  Serial.begin(115200);         // Faster baud rate for smoother data transfer
  while (!Serial);              // Wait for Serial Monitor
  Serial.println("timestamp, resistance, label");
}

void loop() {
  // Check for commands from Serial Monitor
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    // Start and stop recording
    if (command == "start") {
      recording = true;
      Serial.println("Recording started...");
    } else if (command == "stop") {
      recording = false;
      Serial.println("Recording stopped.");
    } else {
      label = command;  // Update label name dynamically
      Serial.println("Label set to: " + label);
    }
  }

  // Only record when "recording" flag is true
  if (recording) {
    unsigned long timestamp = millis();

    // Read analog sensor data
    float reading = analogRead(STRETCHPIN);
    
    // Calculate resistance
    reading = (4095 / reading) - 1;         // (4095/ADC - 1) 
    reading = SERIESRESISTOR / reading;     // 10K / (4095/ADC - 1)

    // Print data in CSV format
    Serial.print(timestamp);
    Serial.print(", ");
    Serial.print(reading);
    Serial.print(", ");
    Serial.println(label);
  }

  delay(1000 / samplingRate);  // Control the sampling rate
}