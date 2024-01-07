class Interface {
    void shape(){

    }
}
class Circle extends Interface{
    void shape(){
        System.out.println("This is a Circle.");
    }
}
class Square extends Interface{
    void shape(){
        System.out.println("This is a Square.");
    }
}


public class Main{
    public static void main (String[] args){
        Circle obj1 = new Circle();
        obj1.shape();

        Square obj2 = new Square();
        obj2.shape();
    }
}