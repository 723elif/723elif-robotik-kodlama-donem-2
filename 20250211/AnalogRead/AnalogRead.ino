void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop()
 {
  int pot1 = analogRead (A0);
  if (pot1 < 400)
   {
    digitalWrite(3,HİGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  else if (pot1 < 800)
  {
    digitalWrite(3,HİGH);
    digitalWrite(4,HİGH);
    digitalWrite(5,LOW);
  }
  else 
  {
    digitalWrite((3,HİGH);
    digitalWrite((4,HİGH);
    digitalWrite((5,HİGH);
  }
  
}
    