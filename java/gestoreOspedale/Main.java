public class Main {

    public static void main(String[] args) {
        Ospedale o = new Ospedale();
        int scelta;
        o.carica();
        do {
            System.out.println(
                    "1 inserire un nuovo paziente o un nuovo medico\n"
                            + "2 cancellare una persona, dato il cf\n"
                            + "3 stampare tutti i medici\n"
                            + "4 stampare tutti i pazienti\n"
                            + "5 stampare prima tutti i pazienti e poi tutti i medici\n"
                            + "0 chiudi");
            scelta = new java.util.Scanner(System.in).nextInt();
            switch (scelta) {
                case 1:
                    o.aggiungi();
                    break;
                case 2:
                    o.cancella();
                    break;
                case 3:
                    o.stampaMedici();
                    break;
                case 4:
                    o.stampaPazienti();
                    break;
                case 5:
                    o.stampaPazientiMedici();
                    break;
            }
        } while (scelta != 0);
        o.salva();
    }

}