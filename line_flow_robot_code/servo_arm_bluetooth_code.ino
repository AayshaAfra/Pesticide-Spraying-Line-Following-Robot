char Incoming_value = 0;
#include<Servo.h>
Servo my;
                
void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT); 
  my.attach(3);      
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1')             
      digitalWrite(13, HIGH); 
      
      if(Incoming_value == '3')             
      my.write(0);

      if(Incoming_value == '4')             
      my.write(180);

    else if(Incoming_value == '2')       
      digitalWrite(13, LOW);   
  }                            
}
