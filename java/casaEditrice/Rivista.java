public class Rivista {
    private String titolo;
    private String period;
    private double prezzo;

    public Rivista(){
    }
    public Rivista(String titolo, String period, double prezzo){
        this.titolo = titolo;
        this.period = period;
        this.prezzo = prezzo;
    }

    public String getTitolo() {
        return titolo;
    }

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }

    public String getPeriod() {
        return period;
    }

    public void setPeriod(String period) {
        this.period = period;
    }

    public double getPrezzo() {
        return prezzo;
    }

    public void setPrezzo(double prezzo) {
        this.prezzo = prezzo;
    }

    @Override
    public String toString() {
        return "Rivista{" +
                "titolo='" + titolo + '\'' +
                ", period='" + period + '\'' +
                ", prezzo=" + prezzo +
                '}';
    }
}
