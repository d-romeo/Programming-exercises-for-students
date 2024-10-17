import java.io.*;
import java.util.*;
public class Ospedale {
    Scanner tn= new Scanner(System.in);
    Scanner ts= new Scanner(System.in);
    private ArrayList<Persona> lista;
    public Ospedale(){
        lista= new ArrayList();
    }
    public void carica(){
        try {
            BufferedReader lettore= new BufferedReader(new FileReader(new File("mp.csv")));
            String s;
            Persona p;

            while( (s=lettore.readLine() )  != null){
                String[] valoristr= s.split(",");
                int età = Integer.parseInt(valoristr[2]);
                if(valoristr[4].equals("p")){
                    p= new Paziente(valoristr[0],valoristr[1],età, valoristr[3]);
                }else{
                    p= new Medico(valoristr[0],valoristr[1],età, valoristr[3]);
                }
                lista.add(p);
            }
            lettore.close();
        } catch (FileNotFoundException ex) {
            System.out.println("file non trovato");
        } catch (IOException ex) {
            System.out.println("errore di lettura");
        }
    }
    public void salva(){
        try {
            PrintWriter scrittore = new PrintWriter(new FileWriter( new File("mp.csv")));
            for (Persona p : lista) {
                scrittore.println(p.toString());
            }
            scrittore.flush();
            scrittore.close();
        } catch (IOException ex) {
            System.out.println("errore di scrittura");
        }
    }
    public void aggiungi() {
        System.out.println("inserisci nominativo");
        String n = ts.nextLine();
        System.out.println("inserisci il suo codice fiscale");
        String cf= ts.nextLine();
        System.out.println("inserisci l'età");
        int età = tn.nextInt();

        String risp;
        Persona p;
        do {
            System.out.println("medico o paziente ? rispondi con m/p");
            risp = ts.nextLine();
        } while (!risp.equals("m") && !risp.equals("p"));

        if(risp.equals("p")){
            System.out.println("ins malattia");
            String mal= ts.nextLine();
            p = new Paziente(n, cf, età, mal);
        }else{
            System.out.println("ins specializzazione");
            String sp= ts.nextLine();
            p = new Medico(n, cf, età, sp);
        }
        lista.add(p);
    }
    public void cancella() {
        System.out.println("inserisci codice fiscale");
        String cf=ts.nextLine();

        for (Persona p : lista) {
            if (p.getCf().equals(cf)) {
                lista.remove(p);
                return;
            }
        }
    }
    public void stampaMedici(){
        for (Persona p : lista) {
            if(p instanceof Medico){
                System.out.println(p.toString());
            }
        }
        System.out.println("\n=========================");
    }
    public void stampaPazienti(){
        for (Persona p : lista) {
            if(p instanceof Paziente){
                System.out.println(p.toString());
            }
        }
        System.out.println("\n=========================");
    }
    public void stampaPazientiMedici(){
        stampaPazienti();
        stampaMedici();
    }
