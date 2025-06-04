🔢 Multi-Process Number Operations in C
This C program demonstrates the use of process creation using fork() and basic inter-process computation. It allows the user to enter three numbers and then uses child processes to perform different mathematical tasks in parallel.

🧠 What It Does
Takes three user inputs: A, B, and C

Spawns two child processes:

👶 Child Q computes the factorial of A

👶 Child A computes the Fibonacci series up to C terms and checks if C is a prime number

🧓 The parent process waits for both children to complete

💡 Features
✅ Demonstrates use of fork(), exit(), and wait() system calls

✅ Implements three classic algorithms:

Factorial calculation

Fibonacci series generation

Prime number checking

✅ Proper separation of logic across processes

✅ Console-based user interaction




![1](https://github.com/user-attachments/assets/4261d66c-f79d-4c15-9d16-1a83a1dcdc2a)
![2](https://github.com/user-attachments/assets/e42ef236-58d8-447d-a045-d309e64d5829)
