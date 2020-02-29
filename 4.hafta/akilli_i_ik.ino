int led=10;
#define echo 11
#define trig 12
long sure, mesafe;
void setup() {
 Serial.begin(9600);
 //Seri haberleşme ekranını açıyoruz
 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
}
void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  sure=pulseIn(echo,HIGH);  
  // pulseIn HIGH ve LOW sürelerini okur
  mesafe=sure/58.2; 
  Serial.println(mesafe);
  if (mesafe <20 ) {
    digitalWrite(led,HIGH);
    }
 else  {
    digitalWrite(led,LOW);
 }
}
