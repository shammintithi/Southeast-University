class Interface {
    void info() { //method
    }   
}

class Student1 extends Interface {
    void info(){ //method

    System.out.println("Shammin");

    }
}
class Student2 extends Interface {
    void info(){ //method

    System.out.println("Tithi");

    }
}


public class Main{
    public static void main(String [] args){
        Student1 obj1 = new Student1(); //creating object;
        obj1.info(); //call the method by class Student1

        Student2 obj2 = new Student2();
        obj2.info();
        
    }
}