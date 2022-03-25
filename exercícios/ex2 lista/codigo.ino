 int led = 2;
int ledois = 4;
void setup()
{
  pinMode(led,OUTPUT);
}
void loop()
  
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
   digitalWrite(ledois, HIGH);
  delay(1000);
  digitalWrite(ledois, LOW);
  delay(1000);
}
