const int onTime = 1000;
const int offTime = 500;
 
 void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
 
 }
 void loop(){
  digitalWrite(4,HIGH);
  delay (onTime);
  digitalWrite(4,LOW);
  delay (offTime);
  digitalWrite(5,HIGH);
  delay (onTime);
  digitalWrite(5,LOW);
  delay (offTime);
  digitalWrite(6,HIGH);
  delay (onTime);
  digitalWrite(6,LOW);
  delay (offTime);
  
//  Double mixed colors;
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay (onTime);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay (offTime);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay (onTime);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  delay (offTime); 
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay (onTime);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay (offTime); 
  
 }
  


