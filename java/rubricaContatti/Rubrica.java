import java.util.ArrayList;
import java.util.Scanner;

public class Rubrica {
    Scanner tn = new Scanner(System.in);
    Scanner ts = new Scanner(System.in);
    private ArrayList<Contatto> lista = new ArrayList<>();
    Contatto cont;
    public Rubrica(){
    }
    public void aggiungiContatto() {
        System.out.println("Inserisci il nome: \n");
        String nome = ts.nextLine();
        System.out.println("Inserisci il cognome: \n");
        String cognome = ts.nextLine();
        System.out.println("Inserisci il telefono: \n");
        int telefono = tn.nextInt();
        cont = new Contatto(nome, cognome, telefono);
        lista.add(cont);
    }
    public int trovaIndice(String nome, String cognome){
        for(int i = 0; i < lista.size(); i++){
            cont = lista.get(i);
            String nomeContatto =  cont.getNome();
            String cognomeContatto =  cont.getCognome();
            if(nomeContatto.equals(nome) && cognomeContatto.equals(cognome)){
                return i;
            }
        }
        return -1;
    }
    public void cancella() {
        System.out.println("Inserisci il nome: \n");
        String nome = ts.nextLine();
        System.out.println("Inserisci il cognome: \n");
        String cognome = ts.nextLine();
            int index = trovaIndice(nome,cognome);
            if (index != -1){
                cont = lista.get(index);
                lista.remove(cont);
            } else{
                System.out.println("Contatatto non trovato!");
            }
        }

    public void modifica() {
        System.out.println("Inserisci il nome: \n");
        String nome = ts.nextLine();
        System.out.println("Inserisci il cognome: \n");
        String cognome = ts.nextLine();
        int index = trovaIndice(nome,cognome);
        if (index != -1){
            cont = lista.get(index);
            System.out.println("Inserisci il nome nuovo: \n");
            String nome_nuovo = ts.nextLine();
            System.out.println("Inserisci il cognome nuovo: \n");
            String cognome_nuovo = ts.nextLine();
            System.out.println("Inserisci il telefono nuovo: \n");
            int telefono_nuovo = tn.nextInt();
            cont.setNome(nome_nuovo);
            cont.setCognome(cognome_nuovo);
            cont.setTelefono(telefono_nuovo);
        } else{
            System.out.println("Contatatto non trovato!");
        }
    }
}
