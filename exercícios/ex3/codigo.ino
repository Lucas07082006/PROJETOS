// C++ code
//
  int ledverde= 4;
int ledvermelho= 3;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(ledverde, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledverde, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   
  digitalWrite(ledvermelho, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledvermelho, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
}
