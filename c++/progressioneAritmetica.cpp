// Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica; una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante. 

#include <iostream>
using namespace std; 

int main(){
  // inizializzazione variabili
  int n1, n2, n3;
  int differenza1 = 0, differenza2 = 0;
  
  cout<< "Inserisci tre numeri: ";
  cin>> n1 >> n2 >> n3;

  // calcolo differenza tra n1 e n2
  differenza1 = n2 - n1;

  // calcolo differenza tra n2 e n3
  differenza2 = n3 - n2;

  // confronto differenze
  if(differenza1 == differenza2){
    cout<< "I numeri sono in progressione aritmetica";
  } else {
    cout<< "I numeri non sono in progressione aritmetica";
  }
  return 0; 
}