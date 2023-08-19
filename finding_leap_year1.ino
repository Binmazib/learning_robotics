// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{

  if(Serial.available()>0)
  { 
    int year=Serial.parseInt();
    if(year%4==0&&year%100!=0)
    {  
      Serial.println("the year is leap year");
    
    }
    else if(year%400==0)
    {
     Serial.print("the year is leap year");
    }
    else
    {
   Serial.println("the year is not leap year");
    }
  }
}