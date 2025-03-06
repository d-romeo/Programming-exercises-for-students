#include <iostream>
using namespace std; 
// Sistema di gestione e distributore automatico
float ricarica(float conto){
    float soldi = 0; 
    
    cout<< "Ricarica conto, inserisci monete\n";
    cin >> soldi;
    conto = conto + soldi;
    cout<< "Saldo attuale:" << conto; 
    return conto; 
}

void saldo(float conto){
    cout<< "Saldo disponibile: "<<conto; 
}

float acquisto(float conto, string nomeProdotti[], float prezzoProdotti[]){
    int dispositivo = 0; 
    cout<<"Seleziona 1 per la chiavetta, seleziona 2 per soldi\n"; 
    cin >>dispositivo; 
    if (dispositivo != 1 && dispositivo !=2){
        cout<<"Scelta non esistente! \n"; 
        return 0;
    }
    string prodotto = ""; 
    int scelta = 0; 
    float prezzo = 0;
    for(int i = 0; i<3 ; i++){
        prodotto = nomeProdotti[i];
        prezzo = prezzoProdotti[i]; 
        cout<< i <<" Prodotto: " << prodotto; 
        cout<<" - Prezzo: " << prezzo << "\n";
    }
    cout<< "Segli il prodotto\n"; 
    cin>> scelta; 
    
    if (scelta != 0 && scelta !=1 && scelta != 2){
        cout<<"Prodotto non esistente! \n"; 
        return -1; 
    } else {
        if(prezzoProdotti[scelta] > conto){
            cout<<"Saldo insufficiente\n"; 
            return -1; 
        } else {
            conto = conto - prezzoProdotti[scelta]; 
            if (dispositivo == 1){
                cout<<"Prodotto acquistato, nuovo saldo chiavetta:" << conto<<"\n";
            } else {
                cout<<"Prodotto acquistato, resto ricevuto:" <<conto<<"\n";
                conto = 0; 
            }
            return conto;
        }
    }
    
}

int main(){
    float conto = 0; 
    float risultato = 0; 
    int selezione = 0;
    string nomeProdotti[] = {"Patatine","Acqua","CocaCola"}; 
    float prezzoProdotti[] = {3.50,2,1.80};
    
    do {
        cout<< "\nSeleziona 1 per Ricaricare, 2 per Vedere il saldo disponibile, 3 Acquistare un prodotto, 4 per uscire\n";
        cin >> selezione;
        
        switch(selezione){
            case 1: 
                conto = ricarica(conto); 
            break; 
            case 2:
                saldo(conto); 
            break; 
            case 3:
                risultato = acquisto(conto,nomeProdotti,prezzoProdotti);
                if(risultato !=-1){
                    conto = risultato;
                }
            break;
            case 4:
                cout<<"Termino\n";
            break; 
            default: 
                cout<<"Selezione non disponibile, riprova\n"; 
            break; 
        }
    } while(selezione != 4); 
    
    cout <<"Programma terminato\n"; 
    return 0;
}