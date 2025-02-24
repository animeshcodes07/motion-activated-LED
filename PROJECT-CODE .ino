#define PIR_SENSOR 2  // PIR sensor connected to pin 2
#define RELAY 3       // Relay connected to pin 3

void setup() {
  pinMode(PIR_SENSOR, INPUT);
  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, HIGH); // Ensure the relay is OFF initially (active LOW)
  // Serial.begin(9600); // Uncomment for debugging
}

void loop() {
  int motionDetected = digitalRead(PIR_SENSOR);

  if (motionDetected == HIGH) {
    digitalWrite(RELAY, LOW); // Turn ON the relay (active LOW)
    // Serial.println("Motion detected! Relay ON."); // Uncomment for debugging
  } else {
    digitalWrite(RELAY, HIGH); // Turn OFF the relay (active LOW)
    // Serial.println("No motion. Relay OFF."); // Uncomment for debugging
  }

  delay(100); // Small delay to stabilize readings
}
