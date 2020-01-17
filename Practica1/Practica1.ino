/**********************************************************************************
**                                                                               **
**                                 Semàfors                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
  const int led0 = 7;          
  const int led1 = 8;          
  const int led2 = 9;          
  const int led3 = 10;          
  const int led4 = 11;          
  const int led5 = 12;          
  const int buttonPin = 2;     
  int Temps = 2000;
//********** Setup ****************************************************************
  void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
  pinMode(buttonPin, INPUT);   
}
//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);           
  digitalWrite(led3, HIGH);   
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  
  delay(4*Temps);             
  
  digitalWrite(led0, HIGH);   
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);            
  digitalWrite(led5, HIGH);   
  
  delay(Temps);                  
  
  digitalWrite(led0, HIGH);     
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);         
  digitalWrite(led4, HIGH);     
  digitalWrite(led5, LOW);     
  
  delay(Temps);                  
  
  digitalWrite(led0, HIGH);     
  digitalWrite(led1, LOW);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);              
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);     
  
  delay(4*Temps);                  
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);     
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);              
  digitalWrite(led4, LOW);     
  digitalWrite(led5, LOW);    
    
  delay(Temps);                  
  
  digitalWrite(led0, LOW);     
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);           
  digitalWrite(led4, LOW);     
  digitalWrite(led5, LOW);     
  
  delay(Temps);                  
  
  digitalWrite(led0, HIGH);     
  digitalWrite(led1, LOW);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);              
  digitalWrite(led4, LOW);     
  digitalWrite(led5, LOW);     
}

//********** Funcions *************************************************************
