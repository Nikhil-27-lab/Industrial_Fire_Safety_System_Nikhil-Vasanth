#include <LiquidCrystal.h>

// Initialize LCD with Arduino pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 6);

// Define sensor and actuator pins
const int smokeSensorPin = A0;      // MQ2 gas sensor
const int lightSensorPin = A1;      // Ambient light sensor (flame substitute)
const int buzzerPin = 8;
const int ledPin = 9;

// Sensor threshold values
const int smokeThreshold = 500;     // Adjust as needed
const int flameThreshold = 300;     // Lower = darker = flame detected

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  lcd.begin(16, 2);                 // Initialize 16x2 LCD
  Serial.begin(9600);              // For debug via Serial Monitor

  lcd.setCursor(0, 0);
  lcd.print("Fire Safety Sys");
  delay(2000);
  lcd.clear();
}

void loop() {
  int smokeValue = analogRead(smokeSensorPin);
  int lightValue = analogRead(lightSensorPin);

  // Debugging to Serial Monitor
  Serial.print("Smoke: ");
  Serial.print(smokeValue);
  Serial.print(" | Light: ");
  Serial.println(lightValue);

  // Display smoke value
  lcd.setCursor(0, 0);
  lcd.print("Smoke:");
  lcd.print(smokeValue);
  lcd.print("   "); // clear tail digits

  // Fire or Smoke Alert Conditions
  if (lightValue < flameThreshold) {
    lcd.setCursor(0, 1);
    lcd.print("FIRE Detected!  ");
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
  } else if (smokeValue > smokeThreshold) {
    lcd.setCursor(0, 1);
    lcd.print("Smoke Detected! ");
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
  } else {
    lcd.setCursor(0, 1);
    lcd.print("All Safe        ");
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
