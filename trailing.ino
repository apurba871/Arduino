int ar[]={2,3,4,5,6,7};
void setup() 
{
   for(int i=0;i<6;i++)
   {
      pinMode(ar[i],OUTPUT);
   }
}

void loop() 
{
  for(int i=0;i<6;i++)
  {
    digitalWrite(ar[i], HIGH);
    delay(30);
    digitalWrite(ar[i+1], HIGH);
    delay(30);
    digitalWrite(ar[i+2], HIGH);
    delay(30);
    digitalWrite(ar[i+3], HIGH);
    delay(30);
    digitalWrite(ar[i], LOW);
    delay(30);
    //digitalWrite(ar[i+1], LOW);
    //delay(50);
    //digitalWrite(ar[i+2], LOW);
    //delay(50);
  }
  /*for(int i=8;i>-1;i--)
  {
    digitalWrite(ar[i], HIGH);
    delay(20);
    digitalWrite(ar[i-1], HIGH);
    delay(20);
    digitalWrite(ar[i-2], HIGH);
    delay(20);
    digitalWrite(ar[i], LOW);
    delay(20);
    digitalWrite(ar[i-1], LOW);
}*/
}
