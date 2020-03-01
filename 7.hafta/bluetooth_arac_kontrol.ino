char bilgi = 'S';           
int sagmotorileri = 5;        
int sagmotorgeri = 4;         
int sagmotorhiz = 3;                
int solmotorileri = 7;      
int solmotorgeri = 6;      
int solmotorhiz=9;                                 
long hiz;                
void setup() 
{       
Serial.begin(9600);        
pinMode(sagmotorileri, OUTPUT);
pinMode(sagmotorgeri, OUTPUT);
pinMode(solmotorileri, OUTPUT);
pinMode(solmotorgeri, OUTPUT);
hiz = 100;
}

void loop()
{ 
  if (Serial.available() > 0)   
  {   
    bilgi = Serial.read();  
              analogWrite(sagmotorhiz,hiz);
              analogWrite(solmotorhiz,hiz);

        if (bilgi == 'F')
        {     
          digitalWrite(sagmotorileri, HIGH); 
          digitalWrite(sagmotorgeri, LOW);
          digitalWrite(solmotorileri, HIGH);
          digitalWrite(solmotorgeri, LOW);
        }  
        else if (bilgi == 'B')
        { 
          digitalWrite(sagmotorileri, LOW);
          digitalWrite(sagmotorgeri, HIGH);
          digitalWrite(solmotorileri, LOW);
          digitalWrite(solmotorgeri,HIGH);
        }
        else if (bilgi == 'L')  
        { 
          digitalWrite(sagmotorileri, HIGH); 
          digitalWrite(sagmotorgeri, LOW);
          digitalWrite(solmotorileri, LOW);
          digitalWrite(solmotorgeri, HIGH);
        }
        else if (bilgi == 'R')  
        { 
          digitalWrite(sagmotorileri, LOW); 
          digitalWrite(sagmotorgeri, HIGH);
          digitalWrite(solmotorileri, HIGH);
          digitalWrite(solmotorgeri, LOW);
        } 
        else if (bilgi == 'G')  
        { 
          digitalWrite(sagmotorileri, HIGH); 
          digitalWrite(sagmotorgeri, LOW);
          digitalWrite(solmotorileri, LOW);
          digitalWrite(solmotorgeri, LOW);  
        } 
        else if (bilgi == 'I')  
        { 
          digitalWrite(sagmotorileri, LOW); 
          digitalWrite(sagmotorgeri, LOW);
          digitalWrite(solmotorileri, HIGH);
          digitalWrite(solmotorgeri, LOW);    
        } 
        else if (bilgi == 'H')  
        { 
        digitalWrite(sagmotorileri, LOW); 
          digitalWrite(sagmotorgeri, HIGH);
          digitalWrite(solmotorileri, LOW);
          digitalWrite(solmotorgeri, LOW);   
        } 
        else if (bilgi == 'J')  
        { 
          digitalWrite(sagmotorileri, LOW); 
          digitalWrite(sagmotorgeri, LOW);
          digitalWrite(solmotorileri, HIGH);
          digitalWrite(solmotorgeri, LOW);   
        } 
        else if (bilgi == 'S') 
        {
          digitalWrite(sagmotorileri, LOW); 
          digitalWrite(sagmotorgeri, LOW);
          digitalWrite(solmotorileri, LOW);
          digitalWrite(solmotorgeri, LOW);    
        }
        else if (bilgi == '1') 
        {
          hiz = 50;
         }
        else if (bilgi == '2') 
        {
          hiz = 50;
        }
        else if (bilgi == '3') 
        {
          hiz = 100;
        }
        else if (bilgi == '4') 
        {
          hiz = 100;
        }
        else if (bilgi == '5') 
        {
          hiz =150;
        }
        else if (bilgi == '6') 
        {
          hiz = 150;
        } 
        else if (bilgi == '7') 
        {
          hiz = 200;
        }
        else if (bilgi == '8') 
        {
          hiz = 200;
        }
        else if (bilgi == '9') 
        {
          hiz = 255;
        }
        else if (bilgi == 'q') 
        {
          hiz = 255;
        }
        }
    }
