#define M1  D6
#define M2  D8


void setup()
{
 
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
 
}

void loop()
{
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  delay(1000);
 digitalWrite(M2, HIGH);
  digitalWrite(M1, LOW);
  delay(1000); 
  
}
