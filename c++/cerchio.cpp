// Calcolare area e perimetro di un cerchio dato il suo raggio dall'utente.
#include <iostream>
using namespace std; 

int main(){
  // inizializzazione variabili
  int raggio = 0; 
  float area = 0, perimetro = 0;
  
  cout<< "inserisci il raggio del cerchio:  ";
  cin>> raggio;

  // calcolo area 
  area = (raggio^2)*3.14;
  cout<< "l'area del cerchio e' pari a: " << area << "\n";

  //calcolo perimetro
  perimetro = 2*3.14*raggio;
  cout<< "il perimetro del cerchio e' pari a: " << perimetro << "\n"; 
  
  return 0; 
}