public class Main{
    public static void main(String[] args){
        //Creating the two threads
        Thread music1 = new Thread(new Instrument("Music 1 "));
        Thread music2 = new Thread(new Instrument("Music 2"));

        // Start the threads
        music1.start();
        music2.start();
    }


    static class Instrument implements Runnable {
        private final String threadName;

        Instrument(String threadName) {
            this.threadName = threadName;
        }
        @Override
    public void run(){
        for (int i = 1; i <= 10; i++) {
        System.out.println(threadName + ": " + i);
        try{
            Thread.sleep(10);
        }
        catch(InterruptedException e){
            e.printStackTrace();
        }
    }
    }
}
}