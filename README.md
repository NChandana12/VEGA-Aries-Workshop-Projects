# 🛰️ Hands-On Workshop: VEGA Processors & Ecosystem  
**📍 VIT Chennai | 🗓️ Feb 22 – Apr 14, 2025**

---

## 📚 Overview  
This repository features 3 interactive embedded systems projects completed during the hands-on workshop on **VEGA Processors and Ecosystem**, hosted by VIT Chennai. All activities were developed using the **VEGA Aries Development Board** and involved real-time sensor integration, reaction logic, and authentication systems.

---

## 🚀 Projects Included

### 🟢 1. F1 Lights Out Reaction Tester  
A reaction-based game designed to test your reflexes—just like an F1 driver!  
**How it works:**  
- Wait for the red light + buzzer.  
- Tap the touch sensor as quickly as possible.  
- Reaction time gets displayed on Serial Monitor.  
- Your best time gets tracked!

🎯 *Tech used:* Touch Sensor, Buzzer, Red/Green LEDs, Serial Feedback  
🎮 *Concept:* Human Reaction Time Testing  

---

### 🔴 2. IR Proximity Alert System  
A simple and effective safety/alert system.  
**Features:**  
- Detects nearby objects using an IR sensor.  
- Turns on Red LED + Buzzer when object is close.  
- Green LED when no object is detected.  
- Serial Monitor logs object detection status.

🎯 *Tech used:* IR Sensor, Buzzer, RYG LEDs  
🛡️ *Concept:* Proximity Detection + Alerts  

---

### 🟡 3. RFID Access System with RYG LED Logic  
An access control system based on RFID tag verification.  
**Flow:**  
1. Reads RFID card UID  
2. ✅ Match → Green LED = Access Granted  
3. ❌ Mismatch → Yellow LED = Access Denied  
4. 🚫 3 wrong attempts → Red LED = Access Blocked  

🎯 *Tech used:* RFID Module, R/Y/G LEDs, GPIO Logic  
🔐 *Concept:* Authentication & Security Logic  

---

## ⚙️ How to Run
1. Open the code folder of the desired project.
2. Connect components based on the pin map in the comments.
3. Flash the code using the Arduino IDE or VEGA environment.
4. Watch the output on hardware + Serial Monitor.

---

## 🙌 Acknowledgements  
Big thanks to our amazing workshop coordinators —  
**Dr. Vydeki D** & **Dr. Jagannath M** — for guiding us through the world of VEGA processors and embedded systems.  
Shoutout to our peers too — the energy and learning were next level 🚀💯

---

## 📜 License  
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).

---
