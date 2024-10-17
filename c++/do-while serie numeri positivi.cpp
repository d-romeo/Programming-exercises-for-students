#include <iostream>
using namespace std; 

// Far inserire all’utente una serie di numeri interi, quando viene inserito un numero negativo farlo reinserire e non tenerlo in considerazione, terminare la serie quando viene inserito zero. Terminata la lettura della serie scrivere in output la somma dei numeri positivi inseriti.

int main(){
  int n, somma = 0;
  do{
    cout<< "Inserisci un numero: ";
    cin >> n;
    if (n > 0){
      somma = somma + n;
    }
  } while(n != 0);
  cout << "La somma dei numeri positivi inseriti è: " << somma;
}
