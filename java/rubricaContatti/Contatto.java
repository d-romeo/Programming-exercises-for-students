public class Contatto {
    private String nome;
    private String cognome;
    private int telefono;

    public Contatto(String nome, String cognome, int telefono){
        this.nome = nome;
        this.cognome = cognome;
        this.telefono = telefono;
    }
            // GETTER
    public String getNome() {
        return nome;
    }
    public String getCognome(){
        return cognome;
    }
    public int getTelefono(){
        return telefono;
    }

            // SETTER
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setCognome(String cognome){
        this.cognome = cognome;
    }
    public void setTelefono(int telefono){
        this.telefono = telefono;
    }
}