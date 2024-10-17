import java.util.Scanner;

public class Main{
    static Scanner tn = new Scanner(System.in);

    public static void main(String[] args) {
        Rubrica r = new Rubrica();
        int scelta;
        do {
            scelta = menu();
            switch (scelta) {
                case 1:
                    r.aggiungiContatto();
                    break;
                case 2:
                    r.modifica();
                    break;
                case 3:
                    r.cancella();
                    break;
            }
        } while (scelta != 0);
    }
    public static int menu() {
        System.out.println(" Rubrica  con arraylist consente di \n"
                + "1 - aggiungere, \n"
                + "2 - modificare dato il nome e cognome \n"
                + "3 - cancellare una rivista dato il titolo, \n"
                + "0 - chiudi");
        return tn.nextInt();
    }
}

