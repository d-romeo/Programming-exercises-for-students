#include <iostream>
using namespace std; 
// Scrivi un programma, in C++, che inserisca in un vettore la serie di numeri: 1, 2, 4, 8, 16, 32, 64, utilizzando uno o più calcoli. E poi lo stampi al contrario

int main(){
  int const n = 7; 
  int lista[n]; 
  int potenza = 1;
  
  // riempire un vettore di numeri interi
  for (int i = 0; i < n; i++){
     for (int j = 0; j < i; j++){
        potenza = potenza * 2; 
     }
    lista[i] = potenza; 
    potenza = 1; 
  } 
  for (int j = n-1; j >-1; j--){
    cout<< lista[j]<< "\n"; 
  }
  return 0; 
}
