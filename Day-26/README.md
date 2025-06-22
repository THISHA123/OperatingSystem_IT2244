
🧵 Multithreading in C – 20.06.2025 Practical
This repository contains five C programs demonstrating various multithreading concepts using the POSIX Threads (pthread) library. Each program showcases practical applications of thread creation, synchronization, and communication.

✅ Program List
1. Basic Thread Execution
Creates two threads that display a simple message. The main thread waits for both threads to complete before exiting.

Concepts: Thread creation, basic execution, thread joining

2. Multiple Threads with IDs
Creates five threads, each printing its thread ID. The main thread joins all threads and prints a completion message.

Concepts: Thread arrays, argument passing, join synchronization

3. Counting with Delay
A thread prints numbers from 1 to 10 with a 1-second delay between each. Main thread waits for completion.

Concepts: Thread execution, timed delay using sleep, sequential output

4. Synchronized Counter Update
Demonstrates shared variable access where one thread increments and another decrements a global counter 100 times, using a mutex for synchronization.

Concepts: Race condition prevention, mutex locking, thread synchronization

5. Return Value from Thread
Squares an integer passed to a thread and sends the result back to the main thread using pthread_exit and pthread_join.

Concepts: Returning data from threads, dynamic memory, pointer handling


|Implementation|Output|
|-------------------|------------------------|
|![q1 answer](https://github.com/user-attachments/assets/bca19691-8e34-4b0c-a063-5bf4e2684b20)|![q1 output](https://github.com/user-attachments/assets/9f691ed0-155e-487a-92b6-a91d2cf80810)|
|![q2 answer](https://github.com/user-attachments/assets/43682134-e5cf-4d21-a7e5-735e02b570b6)|![q2 output](https://github.com/user-attachments/assets/8a37ecfd-1e10-41aa-9d9f-1121c08e93ab)|
|![q3 answer](https://github.com/user-attachments/assets/5f4be402-3a71-4696-9359-6e2141907acd)|![q3 output](https://github.com/user-attachments/assets/466e41cb-30c8-4a07-b8c6-d1ed077fea70)|
|![q4 answer](https://github.com/user-attachments/assets/7ef1c349-1b2a-4c00-878b-0439e7573bdd)|![q4 output](https://github.com/user-attachments/assets/ec9b5154-d63e-47b5-ac04-9a976bceb4ea)|
|![q5 answer](https://github.com/user-attachments/assets/947fcdbd-c65f-46d5-ae3b-4f8369b35881)|![q5 output](https://github.com/user-attachments/assets/d65119da-99f1-4876-bc9b-ba2742ac6e8e)|

