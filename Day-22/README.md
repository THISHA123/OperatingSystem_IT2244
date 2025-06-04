🧠 Shared Memory IPC

Shared memory allows multiple processes to access a common memory space.

It's fast because it avoids kernel-user mode data copying.

🔧 Files Involved

✅ writer.c – Writer Process
Creates a shared memory segment.

Gets user input via fgets().

Writes that input into the shared memory.

Detaches from memory after writing.

✅ reader.c – Reader Process
Accesses the same shared memory using the same key.

Reads the content and prints it.

Detaches and then removes the shared memory segment using shmctl().

🔑 Key Function: ftok("shmfile", 30)
Generates a unique key based on a file (shmfile) and an integer (30).

Both processes must use the same file and integer to get the same shared memory segment.

![1](https://github.com/user-attachments/assets/4a1cf86a-df78-4bb6-b3e4-120b15bdc827)
------------------------------------------------------------------------------------------------------------------------------------------------------------

An Inter-Process Communication (IPC) system where a parent process sends values (n and r) to shared memory, and the child process calculates the factorial and stores the result back in shared memory. Then, the parent retrieves the factorial result to compute:

1️⃣ nCr (Combination) → n! / ( (n-r)! * r! ) 2️⃣ nPr (Permutation) → n! / (n-r)!

🔄 Workflow of Your IPC Program:
Parent Process 🏡

Reads n and r from user input.

Stores values in shared memory.

Shared Memory 📦

Acts as a data exchange medium between parent and child.

Child Process 👶

Reads n from shared memory.

Computes factorial(n) 🧮.

Stores the result in shared memory.

Parent Process 🏡

Reads the factorial result from shared memory.

Computes nCr and nPr and displays the final results. ✅

![last](https://github.com/user-attachments/assets/b9007f70-7ed5-4780-a67b-79fbedddd67b)

------------------------------------------------------------------------------------------------------------------------------------------------------------
Inter-Process Communication (IPC) using memory mapping (mmap) with the MAP_ANONYMOUS | MAP_SHARED flags in a parent-child process model via fork().

🔍 What it does:
Creates a shared memory region using mmap().

Forks a child process.

Child writes a message to the shared memory.

Parent waits for the child to finish.

Parent reads the message from the same shared memory.

🧠 Key Concepts:
Feature	Description
mmap()	Maps memory into the process’s address space. Used here for shared memory.
MAP_SHARED	Changes are visible to other processes mapping the same region.
MAP_ANONYMOUS	No backing file — memory is created anonymously and only exists in RAM.
fork()	Duplicates the current process. Both share the same mapped memory.
wait(NULL)	Parent waits until child finishes, ensuring child writes first.

![ex lab](https://github.com/user-attachments/assets/c3ff7b30-9b33-45c1-b498-5e3052eda812)

