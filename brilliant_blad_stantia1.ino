// C++ code
//
void setup()
{
  pinMode(1,OUTPUT);
          
  pinMode(2,OUTPUT);
  
  pinMode(3,OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(1000); // Wait for 2000 millisecond(s)
  digitalWrite(1, LOW);
  delay(1000); // Wait for 2000 millisecond(s)
  
  digitalWrite(2,HIGH);// Wait for 2000 millisecond(s)
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000); // Wait for 2000 millisecond(s)
  
  digitalWrite(3,HIGH);
  delay(1000); // Wait for 2000 milliseconds(s)
  digitalWrite(3,LOW);
  delay(1000); // Wait for 2000 milliseconds(s)
}