//int counter=0;
int led=12;
int button=4;
void setup() 
{
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  
}

void loop() 
{
  /*if(digitalRead(button)==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }*/
  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  delay(2000);
  /*for(int counter=1;counter<=3;counter++)
  {
    if((counter==3) && (digitalRead(button)==HIGH))
    {
      digitalWrite(led,HIGH);
    }
  }*/
}
