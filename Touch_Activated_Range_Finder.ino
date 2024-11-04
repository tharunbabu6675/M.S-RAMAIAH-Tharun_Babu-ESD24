// Define pin connections
const int trigPin = 9;            // Ultrasonic sensor Trigger pin
const int echoPin = 8;            // Ultrasonic sensor Echo pin
const int touchPin = 7;           // Touch sensor pin
const int segmentPins[] = {2, 3, 4, 5, 6, 10, 11, 12};  // Pins for 7-segment display

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(touchPin, INPUT);

  // Set 7-segment display pins as OUTPUT
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  // Check if touch sensor is activated
  if (digitalRead(touchPin) == HIGH) {
    // Measure distance
    int distance = measureDistance();

    // Display distance on 7-segment display
    displayDistance(distance);

    // Hold the displayed distance for 5 seconds
    delay(5000);

    // Clear display after holding
    clearDisplay();
  }
}

// Function to measure distance with ultrasonic sensor
int measureDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2; // Calculate distance in cm
  return distance;
}

// Function to display distance on 7-segment display (simplified to show single digit)
void displayDistance(int distance) {
  int digit = distance % 10;  // Get the last digit of distance for simplicity
  displayDigit(digit);
}

// Function to display a single digit on 7-segment display
void displayDigit(int digit) {
  const String digits[] = {
    "11111100", "01100000", "11011010", "11110010", "01100110", 
    "10110110", "10111110", "11100000", "11111110", "11110110"
  };


  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentPins[i], digits[digit][i]);
  }
}

// Function to clear the 7-segment display
void clearDisplay() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentPins[i], LOW);
  }
}
