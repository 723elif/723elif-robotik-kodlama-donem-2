void setup()
{
 serial.begin(9600);

 pinMode(3,OUTPUT);
}

void loop() 
{
  int pot = analogRead (A0)
  int LED = map (pot, 0, 1023, 0i 255);
  analogWrite(3, LED);
  serial.print("pot değeri =");
  serial.print(pot);
  serial.print("\t LED Değeri=");
  serial.println(LED);

  delay(2;)  
  
} 
