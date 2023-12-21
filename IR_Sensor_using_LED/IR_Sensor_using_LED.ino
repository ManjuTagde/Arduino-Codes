const int SENSOR_PIN=D6;
const int LED=D4;

void setup() {
  
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // read the state of the the input pin:
  int state = digitalRead(SENSOR_PIN);

  if (state == LOW)
  {
    Serial.println("The obstacle is present");
    
      digitalWrite(LED,HIGH);
    }
  else
  {
    Serial.println("The obstacle is NOT present");
    
      digitalWrite(LED,LOW);
      }
  delay(1000);
}
