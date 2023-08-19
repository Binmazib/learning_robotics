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
    int number=Serial.parseInt();
    if(number>0)
    {  
      Serial.println("Number is positive");
    
    }
    else if(number<0)
    {
     Serial.println("Number is negative");
    }
    else
    {
      Serial.print("is zero");
    }
  }
}