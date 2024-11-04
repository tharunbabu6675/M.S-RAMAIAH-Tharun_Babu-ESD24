int pirSensor=7;
int buzzer=8;
unsigned long secs;
void setup(){
  Serial.begin(9600);
  pinMode(pirSensor,INPUT);
  pinMode(buzzer,OUTPUT);
}
void loop(){
  secs=millis();
  int state=digitalRead(pirSensor);
  if(state==1){
    digitalWrite(buzzer,HIGH);
    Serial.print("Person Detected!");
    Serial.print("\tTime:");
    Serial.println(timeStamp());
  }
  else{
    digitalWrite(buzzer,LOW);
  }
}
int timeStamp(){
  unsigned long currentSeconds=secs/1000;
  unsigned long seconds=currentSeconds%60;
  return seconds;
}
