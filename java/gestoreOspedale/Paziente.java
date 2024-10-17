public class Paziente extends Persona{
    private String mal;
    public Paziente(){
    }
    public Paziente(String nominativo, String cf, int età, String mal){
        super(nominativo, cf, età);
        this.mal= mal;
    }

    public String getMal() {
        return mal;
    }

    public void setMal(String mal) {
        this.mal = mal;
    }

    @Override
    public String toString(){
        return super.toString() + "," + mal +",p";
    }
}