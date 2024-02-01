int Button=10;
int RED=0;
int YELLOW=1;
int GREEN=2;
int reading = 0;
int count =0;
void setup() 
{
  pinMode(Button,INPUT);
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(GREEN,OUTPUT);

}

void loop() 
{
  reading = digitalRead(Button);

  if (reading == HIGH)
  {
    count++;
    
  	if(count==1)
  	{
    	digitalWrite(RED,HIGH);
 	}
    
  	else if(count==2)
    {
   	 	digitalWrite(RED,HIGH);
    	digitalWrite(YELLOW,HIGH);
  	} 
    
    else if(count==3)
  	{
   		 digitalWrite(RED,HIGH);
       	 digitalWrite(YELLOW,HIGH);
   		 digitalWrite(GREEN,HIGH);
  	} 
    
    else 
    {
      digitalWrite(RED,LOW);
      digitalWrite(YELLOW,LOW);
      digitalWrite(GREEN,LOW);
      count=0;
    }
    
    delay(250);
  }
}