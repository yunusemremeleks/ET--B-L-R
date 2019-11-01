//Verilerin tanımlandığı kısım.
int led=13;

void setup() {
   // Pinlerimizin modlarını yazdığımız kısım.
  pinMode(led,OUTPUT);
 
}

void loop() {
  // Döngümüz yapmak istediklerimiz.
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
}
