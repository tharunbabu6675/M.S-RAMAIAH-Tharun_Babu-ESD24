const int trigPin = 9;           // TRIG pin of ultrasonic sensor
const int echoPin = 10;          // ECHO pin of ultrasonic sensor
const int touchSensorPin = 2;    // Touch sensor pin
const int segmentPins[] = {3, 4, 5, 6, 7, 8, 11, 12}; 

// Variables
const int distanceThreshold = 20; // Threshold distance in cm
int counter = 0;                  // Counter for object crossings
const byte digitPatterns[] = {
    0b00111111,  // 0
    0b00000110,  // 1
    0b01011011,  // 2
    0b01001111,  // 3
    0b01100110,  // 4
    0b01101101,  // 5
    0b01111101,  // 6
    0b00000111,  // 7
    0b01111111,  // 8
    0b01101111   // 9
};
void setupPins() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(touchSensorPin, INPUT);
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}
long measureDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2; // Convert time to distance in cm
  return distance;
}


void displayDigit(int digit) {
  if (digit < 0 || digit > 9) return;

  byte pattern = digitPatterns[digit];
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentPins[i], (pattern >> i) & 0x01);
  }
}


void checkTouchSensor() {
  if (digitalRead(touchSensorPin) == HIGH) {
    counter = 0;
    displayDigit(counter);
    delay(300); // Debounce delay
  }
}
void checkDistance() {
  long distance = measureDistance();
  if (distance > 0 && distance < distanceThreshold) {
    counter = (counter + 1) % 10;
    displayDigit(counter);
    delay(300);
  }
}

void setup() {
  setupPins();
  Serial.begin(9600);
  displayDigit(counter);
}

void loop() {
  checkTouchSensor();
  checkDistance();
}
