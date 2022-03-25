// C++ code
//
int laranja = 2;
int verde = 4;
int vermelho = 1;
int branco = 3;
int azul = 5;


void setup()
{
  pinMode(laranja, OUTPUT);
   pinMode(branco, OUTPUT);
   pinMode(azul, OUTPUT);
   pinMode(vermelho, OUTPUT);
   pinMode(verde, OUTPUT);
}

void loop()
{
  
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(vermelho, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(laranja, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(azul, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(verde, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(branco, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
   digitalWrite(laranja, LOW);
  digitalWrite(azul, LOW);
   digitalWrite(verde, LOW);
  digitalWrite(branco, LOW);
   digitalWrite(vermelho, LOW);
}
