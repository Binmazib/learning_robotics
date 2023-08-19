// C++ code
//
void setup()
{
  Serial.begin(9600);
  int n;
  for(n=1;n<101;n++)
  {
   if(n%2!=0)
   {
     Serial.println(n);
   }
  }
}

void loop()
{
   
}