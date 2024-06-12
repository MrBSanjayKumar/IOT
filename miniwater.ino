#define MOISTURE_SENSOR_PIN A0  // Analog pin for soil moisture sensor
#define PUMP_PIN 2              // Digital pin to control the water pump
#define MOISTURE_THRESHOLD 500  // Adjust this threshold based on your sensor and needs

void setup() {
  pinMode(MOISTURE_SENSOR_PIN, INPUT);
  pinMode(PUMP_PIN, OUTPUT);
}

void loop() {
  int soilMoisture = analogRead(MOISTURE_SENSOR_PIN);

  if (soilMoisture < MOISTURE_THRESHOLD) {
    // Soil is dry, turn on the pump
    digitalWrite(PUMP_PIN, HIGH);
    delay(5000);  // Run the pump for 5 seconds (adjust as needed)
    digitalWrite(PUMP_PIN, LOW);  // Turn off the pump
  }

  delay(60000);  // Wait for 1 minute before checking again (adjust as needed)
}

