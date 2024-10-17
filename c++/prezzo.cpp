// Realizzare un programma che legge il prezzo originale di un prodotto, la percentuale di sconto e calcoli il prezzo scontato. Tale programma deve mostrare a schermo una frase del tipo “Il prezzo scontato è 1€”. Si noti che ciò che viene mostrato a schermo non è lo sconto, bensì il prezzo scontato.
#include <iostream>
using namespace std; 

int main(){
  // inizializzazione variabili
  float prezzo = 0;   // il prezzo può avere valori decimali
  float prezzo_scontato = 0;
  int sconto = 0;
  
  cout<< "Inserisci il prezzo: ";
  cin >> prezzo;
  cout<< "Inserisci lo sconto: ";
  cin >> sconto;

  // calcolo sconto
  sconto = prezzo * sconto / 100; // proporzione (prezzo:100% = x : sconto)
  cout<< "Lo sconto è: " << sconto << "\n";
  // calcolo prezzo scontato
  prezzo_scontato = prezzo - sconto;
  cout << "Il prezzo scontato è: " << prezzo_scontato <<"\n"; 
  return 0; 
}