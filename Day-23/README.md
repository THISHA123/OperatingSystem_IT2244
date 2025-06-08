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



----------- process_example3 ----------------------

🧮 Inter-Process Communication: Area Calculator
This C program demonstrates Inter-Process Communication (IPC) using pipes between a parent and child process. The program allows users to calculate the area of various geometric shapes by inputting shape type and dimensions. The parent collects input from the user and the child performs the area calculation.

🔧 Features
Uses fork() to create a child process.

Establishes two unidirectional pipes for bi-directional communication.

Supports area calculation for:

🟢 Circle (C)

🔺 Triangle (T)

🟦 Rectangle (R)

◼️ Square (S)

🖥️ How It Works
Parent Process:

Takes user input for shape type and dimensions.

Sends data to the child process via a pipe.

Waits for the child to compute the area.

Receives and displays the calculated area.

Child Process:

Receives shape data and dimensions.

Computes the area using the appropriate formula.
Sends the result back to the parent.


![3 PIPE EXAMPLE](https://github.com/user-attachments/assets/152a3927-0f40-4521-8958-5e3fe4671565)

