import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Catalogo c = new Catalogo();
        int scelta;
        do{
            scelta = menu();
            switch (scelta) {
                case 1:
                    c.modificaPeriodicita();
                    break;
                case 2:
                    c.stampaInfo();
                    break;
                case 3:
                    c.modificaPrezzo();
                    break;
                case 4:
                    c.aggiungiRivista();
                    break;
                case 5:
                    c.stampaCatalogo();
                    break;
                case 6:
                    c.cancella();
                    break;
            }
        }while(scelta !=0);
        ;
    }

    public static int  menu(){
        System.out.println(" Catalogo  con arraylist consente di \n"
                + "1 - modifica periodicità, \n"
                + "2 - stampa info\n"
                + "3 - modifica prezzo\n"
                + "4 - aggiungi rivista\n"
                + "5 - stampa catalogo  \n"
                + "6 - cancellare  \n"
                + "0 - chiudi");
        return (new Scanner(System.in)).nextInt();
    }
}
