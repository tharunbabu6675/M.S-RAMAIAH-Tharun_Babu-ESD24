// Pin definitions for 7-segment display
int D1 = 3;
int D2 = 4;
int D3 = 5;
int D4 = 6;
int A = 13;
int B = 12;
int C = 11;
int D = 10;
int E = 9;
int F = 8;
int G = 7;
int DP = 2;
int trigPin = 22;  // Ultrasonic sensor trigger pin
int echoPin = 23;  // Ultrasonic sensor echo pin
int digitpins[] = {D1, D2, D3, D4};
int segmentpins[] = {A, B, C, D, E, F, G, DP};

// Segment values for digits 0-9
const String digits[] = {
  "11111100", "01100000", "11011010", "11110010", "01100110", 
  "10110110", "10111110", "11100000", "11111110", "11110110"
};

int lenSegmentpins = 8;
int lenDigitpins = 4;
long distance;
unsigned long previousMillis = 0;  // Store the last time update
const long interval = 1000;  // Interval for updates (1 second)

void setup() {
  // Setup pins for displays
  for (int i = 0; i < lenDigitpins; i++) {
    pinMode(digitpins[i], OUTPUT);
    digitalWrite(digitpins[i], HIGH);  
  }
  for (int i = 0; i < lenSegmentpins; i++) {
    pinMode(segmentpins[i], OUTPUT);
  }
  
  // Setup ultrasonic sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
}


void clearScreen() {
  for (int i = 0; i < lenDigitpins; i++) {
    digitalWrite(digitpins[i], LOW);
    for (int j = 0; j < lenSegmentpins; j++) {
      digitalWrite(segmentpins[j], LOW);
    }
    digitalWrite(digitpins[i], HIGH);
  }
}


void printDigit(int pos, int number) {
  digitalWrite(digitpins[pos], LOW);
  for (int j = 0; j < lenSegmentpins; j++) {
    if (digits[number].charAt(j) == '1') {
      digitalWrite(segmentpins[j], HIGH);
    } else {
      digitalWrite(segmentpins[j], LOW);
    }
  }
  digitalWrite(digitpins[pos], HIGH);
}


long measureDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  long distanceCm = duration * 0.034 / 2; 
  return distanceCm;
}

void displayDistance(long distance) {
  // Ensure the distance string is 4 digits long
  String s = String("0000") + String(distance);
  s = s.substring(s.length() - 4);  
  
  for (int i = 0; i < 4; i++) {
    int digit = s.charAt(i) - '0';  
    
    
    printDigit(i, digit);
    
    delay(2);  
  }
}

void loop() {
  unsigned long currentMillis = millis(); 

  
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;  

    
    distance = measureDistance();
    displayDistance(distance);

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
}
