#define trig 4
#define echo 3
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delay(1000);
  digitalWrite(trig, HIGH);
  delay(1000);
  digitalWrite(trig, LOW);
  float duration=pulseIn(echo,HIGH);
  float distance=(duration/2)*0.0344;
  delay(1000);
  if(distance<10)
  {
    Serial.println("Full");
  }
  else {
        Serial.println("    ");
       }
 
}
