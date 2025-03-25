#define SERIESRESISTOR 10000   // 10K resistor
#define STRETCHPIN A0           // Pin connected to the stretch sensor

String currentLabel = "none";   // Current action label
bool recording = false;         // Recording state
unsigned long startTime = 0;    // Starting time for consistent timestamps

void setup() {
  Serial.begin(9600);
  Serial.println("timestamp,resistance,label");  // CSV header
}

void loop() {
  // Check for Serial commands to start/stop recording or label actions
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "start") {
      recording = true;
      startTime = millis();      // Reset timestamp at start
      Serial.println("Recording started...");
    } 
    else if (command == "stop") {
      recording = false;
      Serial.println("Recording stopped.");
    } 
    else if (recording) {
      // Assign new label while recording
      currentLabel = command;
      Serial.print("Label set to: ");
      Serial.println(currentLabel);
    }
  }

  if (recording) {
    // Read the resistance data
    float reading = analogRead(STRETCHPIN);

    // Convert ADC reading to resistance
    reading = (4095.0 / reading) - 1;         // (4095 / ADC - 1)
    reading = SERIESRESISTOR / reading;       // 10K / (4095 / ADC - 1)

    // Create timestamp in milliseconds
    unsigned long currentTime = millis() - startTime;

    // Print in CSV format
    Serial.print(currentTime);
    Serial.print(",");
    Serial.print(reading, 2);   // Print resistance with 2 decimal places
    Serial.print(",");
    Serial.println(currentLabel);

    // Delay for stability (adjust as needed)
    delay(100);
  }
}
