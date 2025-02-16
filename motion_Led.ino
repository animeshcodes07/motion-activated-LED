int pirPin = 2;  // PIR sensor output pin
int ledPin = 5;  // LED pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {  // Motion detected
    digitalWrite(ledPin, HIGH);       // Turn LED ON
    Serial.println("Motion Detected! LED ON");
    delay(5000);                      // Keep LED on for 5 sec
    digitalWrite(ledPin, LOW);        // Turn LED OFF
  }
}
