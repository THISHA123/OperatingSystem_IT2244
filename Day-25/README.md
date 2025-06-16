-------------------------------  thread.c  ------------------------------------

🧵 Simple Multithreading in C using pthread
This is a basic C program that demonstrates how to create and run a thread using the POSIX pthread library. 
It prints "Hello world" from a separate thread after a short delay.

📋 Features
Creation of a thread with pthread_create()

Synchronization using pthread_join()

Use of sleep() to simulate delay in thread execution

Threaded function prints a message

🛠️ How It Works
The main function launches a thread.

The new thread runs the helloWorld() function.

Main thread waits for the created thread to finish using pthread_join().


![thread](https://github.com/user-attachments/assets/1de52d38-6b51-488a-9429-8e67a49d6b34)


------------------------------  thread2.c  -------------------------------------------

This program launches two threads that each print a message. It demonstrates:

Creating threads using pthread_create()

Passing string arguments to thread functions

Synchronizing thread completion with pthread_join()

![thread 2](https://github.com/user-attachments/assets/5b90622b-4133-45a2-87bd-bdbeb5a45d65)



------------------------------  threadfun.c  -------------------------------------------


🧵 Program Overview
This C program demonstrates basic multithreading using POSIX pthread. It launches 3 threads—each prints a different message.

🔧 How It Works
print_message() is the thread function that prints a message passed via arg.

messages[] holds the messages for each thread.

A for loop creates threads and passes each message.

Another loop waits for all threads to finish using pthread_join()

🌀 Note: The order may vary depending on thread scheduling.



![thread function](https://github.com/user-attachments/assets/8bad6a99-1370-4e09-999e-18b228593f99)

------------------------------  parallel_sum_threads.c  -------------------------------------------


🧩 Program Purpose
This C program demonstrates parallel computation of a sum using POSIX threads (pthread). The array is split into two halves, and each half is processed by a separate thread. After both threads complete, the results are combined to produce the total sum.

⚙️ How It Works
An integer array of size 6 is defined.

Two threads (t1 and t2) are created:

sum_part1() computes the sum of the first half.

sum_part2() computes the sum of the second half.

Both threads update separate global variables (sum1 and sum2).

After both threads finish, their results are added to calculate the total.


![parallel sum threads](https://github.com/user-attachments/assets/c746cdc1-66ae-413e-bedf-5597fbc2c8a6)
