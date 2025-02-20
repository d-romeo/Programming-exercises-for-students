#include <iostream>
#include <cmath>
using namespace std;
// funzione per verificare se il numero è primo
bool numero_primo(int numero){
  for(int i=2; i<sqrt(numero); i++)
    {
      if (numero % i == 0){
        return false;
      }
    }
  return true; 
}

int main(){
  int n1 = 0;
  cout << "Inserisci un numero: ";
  cin >> n1;
  numero = numero_primo(n1);
  if (numero == true) {
      cout << "Il numero è primo" << endl;
  } else {
      cout << "Il numero non è primo" << endl;
  }
}