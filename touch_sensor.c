/*
   Project name: ESP32 Touch Sensor Capacitive Touch Module
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-touch-sensor-capacitive-touch-module
*/

// Define the capacitive touch pin (one of the touch-sensitive pins on ESP32)
const int touchPin = T0; // Touch pin 0 (T0) corresponds to GPIO 4

// Threshold for touch detection
const int touchThreshold = 40;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  // Note: No need to set pinMode for touch pins
}

void loop() {
  // Read the capacitive touch value
  int touchValue = touchRead(touchPin);

  // Print the touch value to the Serial Monitor
  Serial.print("Touch Value: ");
  Serial.println(touchValue);

  // Check if touch value is below the threshold (indicating a touch)
  if (touchValue < touchThreshold) {
    Serial.println("Touch detected!");
  } else {
    Serial.println("No touch detected.");
  }

  delay(500); // Delay before the next reading
}
