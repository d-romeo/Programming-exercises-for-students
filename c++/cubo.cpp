// Si realizzi un programma che sia in grado di calcolare la superficie totale di un cubo ed il volume del cubo, conoscendo il valore del lat

#include <iostream>
using namespace std;

int main() {
  // inizializzazione variabili
  int lato, superficie = 0, volume = 0;
  cout<< "inserisci il lato del cubo: ";
  cin>> lato;
  
  // calcolo superficie totale
  superficie = 6*(lato^2); 
  cout<< "la superficie totale e' pari a: " << superficie << "\n";
  // calcolo volume 
  volume  = lato^3; 
  cout<< "il volume e' pari a: " << volume << "\n";
  return 0; 
}







