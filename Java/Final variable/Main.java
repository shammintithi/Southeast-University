class University{
    final String name = "Southeast University"; //constant variable //final variable

    int holiday = 10;

    final int fees; //blank final variable

    static final String student; //static blank final variable

    University(){
        fees = 1230000;
    }

    static{
        student = "Tithi";
    }

    void display(){
        //name = "JU"; //in line 2 the "final " keyword is used. So, here the 'name' is cant be changed
        System.out.println(name);
        System.out.println(holiday);
        System.out.println(fees);
        System.out.println(student);
    }
}

public class Main{
    public static void main (String[] args){
        University object = new University(); //creating object
        object.display();
    }
}


// Comment- 1:
// line - 5 : void display(){} is a method for display output

// Comment -2: 
// in line -4: the variable is blank final variable cz the variable in not initialized. 
// for blank final variable we need to initialized the data in constractor mathod in line 10-12.

// Comment -3:
// In line -8: the variable is static blank final variable. And the static blank final variable is need static block for initialized the data. the static block is in 14-16 line