public class Persona extends Object{
    private String nominativo;
    private String cf;
    private int età;
    public Persona(String nominativo, String cf, int età) {
        this.nominativo = nominativo;
        this.cf = cf;
        this.età = età;
    }
    public Persona() {
    }
    public String getNominativo() {
        return nominativo;
    }
    public void setNominativo(String nominativo) {
        this.nominativo = nominativo;
    }
    public String getCf() {
        return cf;
    }
    public void setCf(String cf) {
        this.cf = cf;
    }
    public int getEtà() {
        return età;
    }
    public void setEtà(int età) {
        this.età = età;
    }

    @Override
    public String toString(){
        return nominativo+","+cf+","+età;
    }

}