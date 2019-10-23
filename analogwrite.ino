//int ledPin = 5;
int ar[]={3,5,6,9};
void setup() 
{
  // put your setup code here, to run once:
  for(int i=0;i<(sizeof(ar)/sizeof(ar[0]));i++)
    pinMode(ar[i], OUTPUT);
}

void loop() 
{
  for(int j=0;j<2;j++)
  {
     for(int i=0;i<=255;i++)
     {
        analogWrite(ar[j], i);
        analogWrite(ar[4-j-1], i);
        delay(10);
     }
  }

  for(int j=1;j>=0;j--)
  {
     for(int i=255;i>=0;i--)
     {
        analogWrite(ar[j], i);
        analogWrite(ar[4-j-1], i);
        delay(10);
     }
  }
  delay(500);
}
