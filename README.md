# DC Motor Control using Arduino UNO + L293D

This project demonstrates bidirectional control (forward/backward) and speed control (PWM) of a DC motor using Arduino UNO and the L293D motor driver.

## 🔧 Components
- Arduino UNO
- L293D Motor Driver IC
- DC Motor
- 6–9V Battery
- Breadboard & Jumper Wires

## ⚙️ Wiring (Color-coded)
- Green: GND (Arduino GND, Battery –, L293D GND pins)
- Blue: 5V (Arduino 5V → L293D Vcc1)
- Red: Motor supply (Battery + → L293D Vcc2)
- Orange: IN1 (D8), IN2 (D9)
- Purple: EN1 (PWM D6)
- Black: Motor outputs (OUT1, OUT2)

## 🧠 Logic
- IN1=HIGH, IN2=LOW → Forward  
- IN1=LOW, IN2=HIGH → Backward  
- EN1 uses PWM (0–255) for speed control

## 📄 Report
Detailed procedure + mathematical PWM model is available in:
`/report/Arduino_L293D_Motor_Report.pdf`

## ▶️ Demo
(Add a short GIF or screenshot from Tinkercad)

## 🚀 Next
- Add second motor (2-wheel car)
- Add online control (ESP32)
