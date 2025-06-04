🔀 Multi-Process Mathematical Computation in C
This project is a C language demonstration of creating and managing multiple processes using fork() and performing independent mathematical tasks in each child process. The program showcases the fundamentals of process IDs, parallel processing, and simple computational logic.

📌 Description
The program prompts the user to input three integers: A, B, and C.

The parent process (P) creates two child processes:

👶 Child Q: Computes and displays the factorial of A along with its process ID

👶 Child A: Displays the Fibonacci sequence up to C terms, checks if C is a prime number, and prints its process ID

The parent process waits for both children to complete using wait() system calls.

🧠 Concepts Covered
Process creation (fork())

Inter-process execution

Basic number algorithms:

Factorial

Fibonacci Series

Prime Number Check

Use of global variables for shared access

Identification of processes via getpid()

🧪 Sample Output


![3](https://github.com/user-attachments/assets/e479e233-e58f-48db-a1d6-78ca7ab47e9f)

![4](https://github.com/user-attachments/assets/82d182d0-e363-491d-9385-a142d4000020)

![5 glo](https://github.com/user-attachments/assets/fca8c13d-1a53-4379-b175-9392d0eeebcc)




