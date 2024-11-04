int temperatureSensor=A0;
int thresholdLimit=100;

void setup(){
  
  Serial.begin(9600);
  pinMode(temperatureSensor,INPUT);
}
void loop(){
  int temp=analogRead(temperatureSensor);
  Serial.print("Temperature:");
    Serial.println(temp);
  if(temp>thresholdLimit){
    Serial.println("Temperature exceed more than the limit!");
  }
  
  delay(1000);
}
