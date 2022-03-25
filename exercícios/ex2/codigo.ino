// C++ code
//
  int ledverde= 4;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(ledverde, HIGH);
  delay(1000); // Wait for 500 millisecond(s)
  digitalWrite(ledverde, LOW);
  delay(1000); // Wait for 500 millisecond(s)
}
