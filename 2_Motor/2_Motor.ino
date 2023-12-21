#define M1  D6
#define M2  D8
#define M3  D1
#define M4  D3


void setup()
{
 
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);
 
}

void loop()
{
  digitalWrite(M1, HIGH);
  digitalWrite(M3, HIGH);
  digitalWrite(M2, LOW);
  digitalWrite(M4, LOW);
  delay(1000); 
  digitalWrite(M2, HIGH);
  digitalWrite(M4, HIGH);
  digitalWrite(M1, LOW);
  digitalWrite(M3, LOW);
  delay(1000); 
  
}
