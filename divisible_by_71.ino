// C++ code
//printing numbers divisible by 7
//counting numbers divisible by 7 between 100 to 500
void setup()
{
  Serial.begin(9600);
  int n;
  int count =0;
  for(n=100;n<501;n++)
  {
   if(n%7==0)
   {
     Serial.println(n);
     count++;
   }
  }
  Serial.print("the total number divisible by 7 is ");
  Serial.print(count);
}

void loop()
{
   
}