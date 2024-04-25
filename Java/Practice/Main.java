// Step 1: Create a class that extends Thread
class MyThread extends Thread {
    // Step 2: Override the run method
    @Override
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Thread: " + i);

            try {
                // Add some delay to make it easier to observe the threading behavior
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class Main {
    public static void main(String[] args) {
        // Step 3: Instantiate the class and start the thread
        MyThread myThread = new MyThread();
        myThread.start();

        // Main thread code (this will run concurrently with the MyThread)
        for (int i = 1; i <= 5; i++) {
            System.out.println("Main: " + i);

            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
