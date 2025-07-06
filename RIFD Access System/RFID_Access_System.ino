#include <SPI.h> 
#include <MFRC522.h> 
#define SS_PIN 10  // SDA of RC522 
#define RST_PIN 9 
SPIClass SPI(0); // For Aries V3 
MFRC522 rfid(SS_PIN, RST_PIN); 
MFRC522::MIFARE_Key key;  
byte nuidPICC[4]; 
// Define RYG LED pins 
#define GREEN_LED 2 
#define YELLOW_LED 3 
#define RED_LED 4 
// Correct card UID (E7 86 4A CA) 
const byte correctUID[4] = {0xE7, 0x86, 0x4A, 0xCA}; 
int failedAttempts = 0; 
void setup() { 
Serial.begin(115200); 
SPI.begin(); 
rfid.PCD_Init(); 
for (byte i = 0; i < 6; i++) key.keyByte[i] = 0xFF; 
// Set LED pins as output 
pinMode(GREEN_LED, OUTPUT); 
pinMode(YELLOW_LED, OUTPUT); 
pinMode(RED_LED, OUTPUT); 
Serial.println("RFID with RYG LED initialized."); 
} 
void loop() { 
if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) return; 
// Check for correct UID 
bool isCorrect = true; 
for (byte i = 0; i < 4; i++) { 
if (rfid.uid.uidByte[i] != correctUID[i]) { 
isCorrect = false; 
break; 
} 
} 
if (isCorrect) { 
Serial.println("Correct card detected!"); 
failedAttempts = 0; 
lightLED(GREEN_LED); 
} else { 
Serial.println("Incorrect card."); 
failedAttempts++; 
if (failedAttempts >= 3) { 
Serial.println("Too many failed attempts!"); 
lightLED(RED_LED); 
} else { 
lightLED(YELLOW_LED);
} 
} 
rfid.PICC_HaltA(); 
rfid.PCD_StopCrypto1(); 
delay(1000); // Small delay before next read 
} 
void lightLED(int ledPin) { 
// Turn off all LEDs first 
digitalWrite(GREEN_LED, LOW); 
digitalWrite(YELLOW_LED, LOW); 
digitalWrite(RED_LED, LOW); 
// Turn on the selected LED 
digitalWrite(ledPin, HIGH); 
}
