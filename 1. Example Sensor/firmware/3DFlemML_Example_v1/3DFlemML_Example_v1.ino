#define SERIESRESISTOR 10000    // The value of the fixed resistor
#define STRETCHPIN A0           // Analog pin connected to the stretch sensor

void setup() {
  Serial.begin(115200);         // Faster baud rate for efficient data transfer
  while (!Serial);
}

void loop() {
  // Get current timestamp in milliseconds
  unsigned long timestamp = millis();

  // Read the sensor value
  float reading = analogRead(STRETCHPIN);

  // Convert to resistance
  reading = (4095.0 / reading) - 1;         // (4095/ADC - 1) 
  reading = SERIESRESISTOR / reading;        // 10K / (4095/ADC - 1)

  // Print timestamp + resistance value
  Serial.print(timestamp);
  Serial.print(", ");
  Serial.println(reading);

  delay(10);   // Reduce delay for more frequent samples
}
