public class BasicThreadedCounter {
    public static void main(String[] args) {
        // Create two threads
        Thread threadA = new Thread(new Counter("Thread A"));
        Thread threadB = new Thread(new Counter("Thread B"));

        // Start the threads
        threadA.start();
        threadB.start();
    }

    // Runnable implementation for counting
    static class Counter implements Runnable {
        private final String threadName;

        Counter(String threadName) {
            this.threadName = threadName;
        }

        @Override
        public void run() {
            for (int i = 1; i <= 10; i++) {
                System.out.println(threadName + ": " + i);

                // Introduce a short delay to allow interleaving
                try {
                    Thread.sleep(10);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
