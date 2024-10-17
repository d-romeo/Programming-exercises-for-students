#include <iostream>
using namespace std; 

// Creare un programma che continua a far inserire all’utente dei numeri interi, il programma si ferma quando vengono inseriti più numeri negativi di quelli positivi.

int main(){
  int n1, neg = 0, pos = 0;
  do{
    cout<<"inserisci un numero \n"; 
    cin>>n1;
    if (n1 <= 0){
      neg++; 
    } else {
      pos++; 
    }
    cout<<"neg: " << neg << "\n"; 
    cout<<"pos: "<< pos << "\n"; 
  } while(neg <= pos); 
  
}
