  int r=6;
  int b=5;
  int g=3;

void setup() 
{
    pinMode(r, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(g, OUTPUT);

}   

void loop() 
{
  digitalWrite(r,1);
  delay(1000);
  digitalWrite(r,0);
  delay(1000);

   digitalWrite(b,1);
  delay(1000);
  digitalWrite(b,0);
  delay(1000);

   digitalWrite(g,1);
  delay(1000);
  digitalWrite(g,0);
  delay(1000);

 

}
