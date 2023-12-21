#define LED1 D0
#define LED2 D3
#define LED3 D6


void setup()
{
  pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(A0, INPUT);
   Serial.begin(9600);
}

void loop()
{
 int x=(analogRead(A0));
 Serial.println(x);
 if (x>0 && x<500)
 {
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  }
  else if (x>500 && x<700)
  {
  digitalWrite(LED2,HIGH);
  digitalWrite(LED1,LOW);
  digitalWrite(LED3,LOW);
  }
  else if (x>700 && x<1000)
  {
  digitalWrite(LED3,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED1,LOW);
  }
}
