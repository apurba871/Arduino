//int ledPin = 3;
int ledPins[] = {10, 11, 12, 13};

void pattern1(int arr[], int len)
{
  for(int i=0;i<len;i++)
  {
    digitalWrite(arr[i], HIGH);
    delay(100);
    digitalWrite(arr[i], LOW);
    delay(100);
  }

   for(int i=len-1; i>=0;i--)
  {
    digitalWrite(arr[i], HIGH);
    delay(100);
    digitalWrite(arr[i], LOW);
    delay(100);
  }
}

void fourBitUp()
{
  String ar[]= {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};   //up counter
  //String ar[]= {"1111","1110","1101","1100","1011","1010","1001","1000","0111","0110","0101","0100","0011","0010","0001","0000"};   //down counter
  for(int i=0;i<16;i++)
  {
       for(int j=0;j<4;j++)
       {
           char ch=ar[i].charAt(j);
           if(ch == '1')
           {
              digitalWrite(ledPins[j], HIGH);
           }
       }
       delay(1000);
       reset(ledPins, 4);
   }
}

void reset(int arr[], int len)
{
  for(int i = 0; i<len; i++)
  {
    digitalWrite(ledPins[i], LOW);
  }
}

void setup() {
  
  // put your setup code here, to run once:
  //pinMode(5, OUTPUT);
  //digitalWrite(5, HIGH);
  for(int i=0;i<4;i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly
  //pattern1(ledPins, 4);
  fourBitUp();
}
