class MyThread extends Thread {
    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println("Class " + Thread.currentThread().getName() + ": " + i);
            try{
                Thread.sleep (1000);
            }
            catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}

public class MainThread{
    public static void main(String [] args){
        MyThread obj1 = new MyThread();
        MyThread thread2 = new MyThread();
        MyThread thread3 = new MyThread();

        obj1.start();
        thread2.start();
        thread3.start();
    }
}
