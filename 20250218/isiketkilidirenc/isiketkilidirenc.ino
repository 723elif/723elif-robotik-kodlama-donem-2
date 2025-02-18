void setup()
{
  pinMode (A0, İNPUT);
  pinMode (3, OUTPUT);
  serial.begin (9600);
}

void loop() 
{
  int LDR = analogRead(A0);
  serial.print ("A0(GİRİS)=");
  serial.println(LDR);
  if (LDR<350)
  {
    digitalWrite(3,1);
  }
  else 
  {
    digitalWrite(3,0);
  }
} 
