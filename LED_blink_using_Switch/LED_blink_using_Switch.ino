

#define LED D3

void setup() {
   pinMode(LED, OUTPUT);
  pinMode(D5, INPUT);
}

void loop() {
  int x=digitalRead(D5);  
  if (x==1)
  {
  digitalWrite(LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  else
  {digitalWrite(LED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }

}
