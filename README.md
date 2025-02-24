# motion-activated-LED
# AN ENERGY-SAVING SMART LIGHTING SOLUTION
In many homes and offices, lights are often left on unnecessarily, leading to energy wastage. This project automates lighting using a PIR motion sensor and Arduino. The system turns the LED ON when motion is detected and OFF after a delay, making it ideal for smart homes, security systems, and energy conservation
# Motion-Activated LED with PIR Sensor  
 📌 Project Overview  
This project turns on an LED/Bulb when motion is detected using a PIR sensor.  

 🛠️ Components Used  
1. Arduino Uno  
2. PIR Motion Sensor  
3. LED or Bulb with Relay  
4. Jumper Wires  
5. Power Supply  

 ⚡ Circuit Connections  
 🔹 PIR Sensor to Arduino  
- **VCC → 5V**
- **GND → GND**
- **OUT → Pin 2**

 🔹 LED to Arduino  
- **Positive (Anode) → Pin 5 (with 220Ω Resistor)**  
- **Negative (Cathode) → GND**  

 🔹 Relay Module to Arduino (For Bulb Control)  
- **VCC → 5V**  
- **GND → GND**  
- **IN → Pin 4**  
- **Relay Output**: Connect Bulb’s live wire via **COM & NO**  

# 🚀 How to Use  
1. Power the Arduino via USB or a 9V battery.  
2. Upload the `motion_Led.ino` file.  
3. When motion is detected, the LED/Bulb will turn ON.  
4. The light will turn OFF after 5 seconds if no motion is detected.  


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
