int motor_i=5;
int motor_g=4;
int hiz=3;
void setup() {
pinMode(motor_i,OUTPUT);
pinMode(motor_g,OUTPUT);
pinMode(hiz,OUTPUT);
}
void loop() {
  digitalWrite(motor_i,HIGH);
  digitalWrite(motor_g,LOW); 
  for (int i=0;i<255;i++){
  analogWrite(hiz,i);
  delay(20);
  }
  for (int i=255;i>0;i--){
  analogWrite(hiz,i);
  delay(20);
  }
  digitalWrite(motor_i,LOW);
  digitalWrite(motor_g,HIGH);
   
  for (int i=0;i<255;i++){
  analogWrite(hiz,i);
  delay(20);
  }
  for (int i=255;i>0;i--){
  analogWrite(hiz,i);
  delay(20);
  }
}
