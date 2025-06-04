✅ Summary of Each Method

🔹 Method 1 – Two separate programs (send5.c & recieve5.c)
Uses two separate processes.

File name in ftok() must match (send5 vs 2021ICT30 mismatch is a mistake).

Flow:

send5.c: creates & sends message.

recieve5.c: receives the message and deletes queue.

Best for separate sender and receiver programs.


🔹 Method 2 – Single program with send and receive (snd3.c)
Sends and receives in same program.

Uses ftok("snd3", 42) – file should exist.

Good for learning/demo but not realistic in real IPC use (since both sending and receiving happen immediately one after the other).


🔹 Method 3 – Simulating parent-child communication (sendrcv.c)
Sends and receives student details (Name, RegNo, Age).

Everything is in one program, sequential execution.

Uses a struct with multiple fields.

Not actual parent-child process; just simulate sequentially.

Good practice for structured message passing.


🔹 Method 4 – Real parent-child using fork() (sendrcv9.c)
Proper IPC with forked child process.

Parent sends, child receives.

Queue key is a fixed value (#define MSGKEY 1111), so no need for ftok().

Best and most realistic method for process-based communication using fork().

![2](https://github.com/user-attachments/assets/6f5f2973-93d7-469d-9b1f-810b7640ce96)

![3](https://github.com/user-attachments/assets/d8a995d0-5518-46dd-98b0-ec411fcd9d34)

![4](https://github.com/user-attachments/assets/a550b7dc-40d8-4547-a6c1-aa3c621f379b)

![5](https://github.com/user-attachments/assets/430b6e47-b070-4c74-ada0-a0fe95398bf1)




