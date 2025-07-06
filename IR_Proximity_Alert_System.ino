// Pin Definitions
 
const int BUZZER_PIN = 0;	// GPIO0 (Buzzer)
const int PROX_SENSOR_PIN = 1; // GPIO1 (Digital Input from IR Sensor) const int RED_LED_PIN = 0;	// PWM0 (Red LED)
const int GREEN_LED_PIN = 2;	// PWM2 (Green LED)

void setup() { pinMode(BUZZER_PIN, OUTPUT);
pinMode(RED_LED_PIN, OUTPUT); pinMode(GREEN_LED_PIN, OUTPUT);

// Set sensor pin as INPUT (digital read) pinMode(PROX_SENSOR_PIN, INPUT);

Serial.begin(115200); // For debugging
}

void loop() {
// Read digital value (HIGH = object detected, LOW = no object) bool objectDetected = digitalRead(PROX_SENSOR_PIN);

Serial.print("Sensor State: ");
Serial.println(objectDetected ? "NOT DETECTED" : "OBJECT DETECTED");

if (objectDetected) {
// Object detected → Red LED + Buzzer ON analogWrite(RED_LED_PIN, 0); // Full brightness analogWrite(GREEN_LED_PIN,255); // Turn off green digitalWrite(BUZZER_PIN, LOW);
// Buzzer ON
} else {
// No object → Green LED + Buzzer OFF analogWrite(RED_LED_PIN, 255);	// Turn off red analogWrite(GREEN_LED_PIN, 0); // Full brightness digitalWrite(BUZZER_PIN, HIGH); // Buzzer OFF
}

delay(10); // Small delay to avoid flickering
}

