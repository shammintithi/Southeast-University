class interface Student{
    void info(); //method
    Qualification implements Student{
    void info(); //method

    System.out.println("Needs to complete SSC & HSC");
}
Skill implements Student{
    void info(); //method

    System.out.println("Say to your skills")
}
}

public class Main {
    public static void main(String[] args){
        Qualification obj1 = new Qualification();
        obj1.info();

        Skill obj2 = new Skill();
        obj2.info();
    }
}