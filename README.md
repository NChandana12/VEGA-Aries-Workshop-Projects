# 🛰️ Hands-On Workshop: VEGA Processors & Ecosystem  
**📍 VIT Chennai | 🗓️ Feb 22 – Apr 14, 2025**

---

## 📚 Overview  
This repository features 3 interactive embedded systems projects completed during the hands-on workshop on **VEGA Processors and Ecosystem**, hosted by VIT Chennai. All activities were developed using the **VEGA Aries Development Board** and involved real-time sensor integration, reaction logic, and authentication systems.

---

## 🚀 Projects Included

### 1️⃣ F1 Lights Out Reaction Tester – Reflex Challenge 
A reaction-based game designed to test your reflexes—just like an F1 driver!  
**How it works:**  
-🔴 Red LED + Buzzer cue → user taps touch sensor as fast as possible
-⏱️ Calculates and displays reaction time via Serial Monitor
-🏆 Tracks best time, average time, and test count

👉 Try to beat the average F1 driver’s reaction speed: 0.2–0.3 sec!

🎯 *Tech used:* Touch Sensor, Buzzer, Red/Green LEDs, Serial Feedback  
🎮 *Concept:* Human Reaction Time Testing  

---

### 🔴 2. IR Proximity Alert System  
A simple and effective safety/alert system.  
**Features:**  
- Detects nearby objects using an IR sensor.  
-🟩 Green LED (safe) when no object is nearby
-🟥 Red LED + buzzer alert when object is detected
-🛠️ Useful for obstacle detection, safety systems, etc.  
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

## 🔧 Setup Instructions

1.Refer to each project folder for:
-📄 Source Code
-🔌 Pin Connection Details
-🖼️ Circuit Diagrams / Output Images
2.Upload code via Arduino IDE (or compatible environment)
3. Power on the Aries board and observe behavior as per logic

---

## 🙌 Acknowledgements  
Big thanks to our amazing workshop instructors — 
**Dr. Vydeki D** & **Dr. Jagannath M** 
for guiding us through the world of VEGA processors and embedded systems.

Special thanks to VIT Chennai for conducting this workshop and helping us explore real-world embedded applications from scratch.

Shoutout to our peers too🚀💯


---

## 📜 License  
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).

---
