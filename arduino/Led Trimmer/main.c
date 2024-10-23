// 1) scrivere un programma che accenda 
// e spenga 3 led in 
//sequenza con un ritardo tra 
//l'acessioni di 3 secondi. 

// 2) Gestire il valroe del 
//ritardo con un potenziometro
// da un valore minimo di 3ms a 2s 
int Trimmer; 
void setup()
{
  pinMode(2,OUTPUT); 
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT);
}

void loop()
{
 digitalWrite(2,HIGH); 
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 Trimmer = map(analogRead(A0),0,1023,300,2000);
 delay(Trimmer); 
 digitalWrite(3,HIGH); 
 digitalWrite(2,LOW);
 digitalWrite(4,LOW);
 Trimmer = map(analogRead(A0),0,1023,300,2000);
 delay(Trimmer);
 digitalWrite(4,HIGH); 
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 Trimmer = map(analogRead(A0),0,1023,300,2000);
 delay(Trimmer);
}