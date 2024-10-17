// Il programma legge tre numeri diversi e li mette in ordine crescente. 
#include <iostream>
using namespace std; 

int main(){
  // inizializzazione variabili
  int n1, n2, n3;
  int min = 0, med = 0, max = 0;

  cout<< "Inserisci tre numeri diversi: ";
  cin>> n1 >> n2 >> n3;
  if (n1 != n2 && n1 != n3 && n2 != n3){
    if(n1>n2 && n1 > n3){  // n1 è il maggiore
      max = n1;
      if(n2>n3){
        med = n2;
        min = n3;
      } else {
        if (n2<n3){
          med = n3;
          min = n2;
        } 
      }
    } else {
      if (n2>n1 && n2>n3){ // n2 è il maggiore
        max = n2;
        if(n1>n3){
          med = n1;
          min = n3;
        } else {
          if(n1<n3){
            med = n3;
            min = n1;
          } 
        }
      } else{
        // se n1 non è maggiore e se n2 non è il maggiore allora lo       sarà n3 
        max = n3;
        if(n1>n2){
          med = n1;
          min = n2;
        } else {
          if(n1<n2){
            med = n2;
            min = n1;
          }
        }
      }
    }
  cout << "I numeri in ordine crescente sono: " << min << ";"<<     med<< ";" <<  max<< "."; 
  } else {
    cout<< "I numeri inseriti sono uguali, riprova.";
  }
  return 0; 
}