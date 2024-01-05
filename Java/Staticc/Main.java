class Student{
    String name;
    int id;
    int age;
    static String University = "Southeast University";

    Student (String name, int id, int age){
        this.name = name;
        this.id = id;
        this.age = age;
    }
    void display(){
    System.out.println("Name: " + name);
    System.out.println("Id: " + id);
    System.out.println("Age: " + age);
    System.out.println("Name of the University : " + University);
    }
}

public class Main {
    public static void main(String[] args)
    {
        Student obj1 = new Student("Tithi", 23, 21);
        Student obj2 = new Student("Shammin" , 62, 17);
        Student obj3 = new Student("Tanha", 4, 15);

        obj1.display();
        obj2.display();
        obj3.display();
    }
}