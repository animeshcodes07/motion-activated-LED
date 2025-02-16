# motion-activated-LED
An Arduino-based project to turn on an LED when motion is detected using a PIR sensor
AN ENERGY-SAVING SMART LIGHTING SOLUTION
In many homes and offices, lights are often left on unnecessarily, leading to energy wastage. This project automates lighting using a PIR motion sensor and Arduino. The system turns the LED ON when motion is detected and OFF after a delay, making it ideal for smart homes, security systems, and energy conservation
📌 COMPONENTS:
Arduino Uno	
PIR Sensor (HC-SR501)	
LED	
Jumper Wires
Breadboard 
Power Source
📌 Download and install Arduino IDE from: https://www.arduino.cc/en/software 
PIR Sensor → Arduino

VCC → 5V (Arduino)
GND → GND (Arduino)
OUT → Digital Pin 2 (Arduino)
LED → Arduino

Anode (+) → 220Ω Resistor → Pin 5 (Arduino)
Cathode (-) → GND (Arduino)

Open Arduino IDE
✔ Create a new sketch (motion_led.ino)
✔ Connect Arduino to your PC via USB
✔ Select Tools > Board > Arduino Uno
✔ Select Tools > Port > (Choose your COM Port)
✔ Click Upload (🔼)

🎯 Testing & Demonstration
1️⃣ Power ON the Arduino (via USB or external power)
2️⃣ Wait for 30-60 seconds (PIR sensor calibration time)
3️⃣ Move your hand in front of the PIR sensor → LED should turn ON
4️⃣ After 5 seconds of no motion, LED turns OFF
5️⃣ Check Serial Monitor (9600 baud) for debugging

Real-World Applications
✅ Smart Homes – Automatic room lighting
✅ Security Systems – Motion-based alert system
✅ Energy Conservation – Reduces unnecessary electricity use
✅ Office Automation – Automatic hallway and conference room lights
