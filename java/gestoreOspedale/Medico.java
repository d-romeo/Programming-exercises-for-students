public class Medico extends Persona{
    private String sp;
    public Medico(){
    }
    public Medico(String nominativo, String cf, int età, String sp){
        super(nominativo, cf, età);
        this.sp= sp;
    }
    public String getSp() {
        return sp;
    }
    public void setSp(String sp) {
        this.sp = sp;
    }
    @Override
    public String toString(){
        return super.toString() + "," + sp + ",m";
    }
}