import java.util.ArrayList;
import java.util.Scanner;

public class Catalogo {
    ArrayList<Rivista> lista = new ArrayList();

    Scanner tn = new Scanner(System.in);
    Scanner ts = new Scanner(System.in);
    Rivista r;

    public Catalogo() {
    }

    public int prendiIndice(String titoloDato) {
        for (int i = 0; i < lista.size(); i++) {
            r = lista.get(i);
            String titoloCiclo = r.getTitolo();
            if (titoloCiclo.equals(titoloDato)) {
                return i;
            }
        }
        return -1;
    }

    public void modificaPeriodicita() {
        System.out.println("Inserisci il titolo: \n");
        String titolo = ts.nextLine();
        int indice = prendiIndice(titolo);
        if (indice != -1) {
            r = lista.get(indice);
            String periodicita = r.getPeriod();
            System.out.println(" Periodicità attuale" + periodicita + "\n");
            System.out.println(" Inserisci una nuova periodicita" + "\n");
            String nuovaPeriod = ts.nextLine();
            r.setPeriod(nuovaPeriod);
        } else {
            System.out.println("Rivista non trovata! \n");
        }
    }

    public void modificaPrezzo() {
        System.out.println("Inserisci il titolo: \n");
        String titolo = ts.nextLine();
        int indice = prendiIndice(titolo);
        if (indice != -1) {
            r = lista.get(indice);
            double prezzo = r.getPrezzo();
            System.out.println(" Il prezzo attuale: " + prezzo + "\n");
            System.out.println("Inserisci nuovo prezzo" + "\n");
            double nuovoPrezzo = tn.nextDouble();
            r.setPrezzo(nuovoPrezzo);
        } else {
            System.out.println("Rivista non trovata! \n");
        }

    }

    public void cancella() {
        System.out.println("Inserisci il titolo: \n");
        String titolo = ts.nextLine();
        int indice = prendiIndice(titolo);
        if (indice != -1) {
            r = lista.get(indice);
            lista.remove(indice);
        } else {
            System.out.println("Rivista non trovata! \n");
        }
    }

    public void aggiungiRivista() {
        System.out.println("Inserisci il titolo: \n");
        String titolo = ts.nextLine();
        System.out.println("Inserisci il periodicita: \n");
        String periodicita = ts.nextLine();
        System.out.println("Inserisci il prezzo: \n");
        double prezzo = ts.nextDouble();

        r = new Rivista(titolo, periodicita, prezzo);
        lista.add(r);
        System.out.println("Rivista aggiunta correttamente! \n");
    }

    public void stampaInfo() {
        System.out.println("Inserisci il titolo: \n");
        String titolo = ts.nextLine();
        int indice = prendiIndice(titolo);
        if (indice != -1) {
            r = lista.get(indice);
            r.toString();
        } else {
            System.out.println("Rivista non trovata! \n");
        }
    }

    public void stampaCatalogo(){
        for(int i = 0; i < lista.size(); i++){
            r = lista.get(i);
            String titolo = r.getTitolo();
            String periodicita = r.getPeriod();
            double prezzo = r.getPrezzo();
            System.out.println("Rivista n:" +i+1+ "\n");
            System.out.println("Titolo: " +titolo+ "\n");
            System.out.println("Periodicita: " +periodicita+ "\n");
            System.out.println("Prezzo: " +prezzo+ "\n");
            System.out.println("--------------------------------------- \n");
        }
    }
}