📂 Interprocess Communication in C


---------------- pipe_demo.c ----------------------------

# Pipe Communication in C

This repository contains a C program that demonstrates **Interprocess Communication (IPC)** using a pipe. 
It writes three messages to a pipe and then reads them sequentially, printing each message to the console.

## 📜 Program Overview
- Creates a **pipe** to enable communication between processes.
- **Writes** three messages to the pipe.
- **Reads** messages from the pipe and displays them.

![1 pipe_demo](https://github.com/user-attachments/assets/5f69597b-360a-4471-af22-1e3e410ab429)


----------- process_example.c ----------------------

This C program demonstrates Interprocess Communication (IPC) using the fork() system call. 
The parent process collects user input (name, registration number, and age), 
while the child process retrieves and prints the collected information.

Key Steps
Parent process asks for user input.

Child process prints the collected information.

Uses fork() to create a child process.

Implements wait(NULL); in the parent to ensure proper process execution.

![2 process example](https://github.com/user-attachments/assets/58d0483a-c2ab-4440-ad20-2148aa49c0fc)




