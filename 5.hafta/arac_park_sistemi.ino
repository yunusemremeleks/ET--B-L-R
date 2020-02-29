#define trig 12
#define echo 11
int buzzer=10;
int led=9;
long sure, mesafe;

void setup() {
pinMode(trig,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
sure=pulseIn(echo,HIGH);
mesafe=sure/58.2;
if (mesafe>100&& mesafe<120){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(800);
}
else if (mesafe>50 && mesafe<100){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(500);
}
else if (mesafe>30 && mesafe<50){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(300);
}
else if (mesafe>15 && mesafe<30){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(200);
}
else if (mesafe<15){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
}
else {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);

}
}
