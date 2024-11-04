#include <LiquidCrystal.h>

// LCD pin configuration
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Switch pins
const int startStopSwitchPin = 6;
const int resetSwitchPin = 7;


volatile bool running = false;
unsigned long previousMillis = 0;
int seconds = 0; 
bool switchPressed = false;

void setup() {
  lcd.begin(16, 2); 
  lcd.print("Digital Stopwatch");

  pinMode(startStopSwitchPin, INPUT_PULLUP);
  pinMode(resetSwitchPin, INPUT_PULLUP);
}

void loop() {
 
  if (digitalRead(startStopSwitchPin) == LOW && !switchPressed) {
    switchPressed = true; 
    running = !running;
    delay(200); // Debounce delay
  } else if (digitalRead(startStopSwitchPin) == HIGH) {
    switchPressed = false; 
  }
  if (digitalRead(resetSwitchPin) == LOW) {
    seconds = 0; 
    lcd.clear();
    lcd.print("Stopwatch Reset");
    delay(2000); 
    lcd.clear();
  }

  if (running) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= 1000) {
      previousMillis = currentMillis;
      seconds++;
    }
    lcd.setCursor(0, 1);
    lcd.print("Time: ");
    lcd.print(seconds);
  }
}
