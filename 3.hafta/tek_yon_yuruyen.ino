int ledler[5]={2, 3, 4, 5, 6};
void setup() {
for(int i=2;i<7;i++){
  pinMode(i,OUTPUT);
}
}
void loop() {
for(int i=2;i<7;i++){
  digitalWrite(i,HIGH);
  delay(50);
  digitalWrite(i,LOW);
}
}
