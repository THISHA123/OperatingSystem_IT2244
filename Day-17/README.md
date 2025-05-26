wait()
------------------------------------------------------------------------------
The wait() function in C is used to make a parent process wait
until one of its child processes completes execution.

------------------------------------------------------------------------------

Understanding fork() Execution
------------------------------------------------------------------------------
The parent process (pid > 0) creates a child process (pid == 0).

After forking, both processes execute their respective tasks.

Each process eventually exits, but special cases can occur:

            fork()
           /     \
(pid > 0) /       \ (pid == 0)
         /         \
    execution    execution
        |            |
       exit         exit

------------------------------------------------------------------------------

1. Zombie Process:
   - Occurs when the child exits, but the parent doesn’t call wait().
   - The child remains in the process table.
   - ✅ Fix: Use wait() in the parent process.

2. Orphan Process:
   - Occurs when the parent exits before the child.
   - The child is adopted by the init process (PID 1).
   - ✅ Fix: OS handles it automatically.

------------------------------------------------------------------------------

sleep()
------------------------------------------------------------------------------
The sleep() function in C is used to pause execution for a specified number 
of seconds.

Purpose of sleep():
- Delays program execution temporarily.
- Allows synchronization between processes in multi-threading 
  or forked processes.
- Prevents CPU overutilization in continuous loops.

------------------------------------------------------------------------------

exit()
------------------------------------------------------------------------------
The exit() function in C is used to terminate a process immediately.

Purpose of exit():
- Stops program execution at any point.
- Returns an exit status to the operating system.
- Helps clean up resources before termination.

Exit Status Codes:
✔ exit(0); → Normal termination (success).  
✔ exit(1); → Indicates error or abnormal termination.

------------------------------------------------------------------------------
![1](https://github.com/user-attachments/assets/10ebd9d2-96db-408f-9669-d9cf685e6e4d)

![2](https://github.com/user-attachments/assets/60d94d3b-a849-4734-9507-7b4513d9e8b6)

![3](https://github.com/user-attachments/assets/7594d265-eba8-461c-bc43-79532819b236)

![4](https://github.com/user-attachments/assets/f214f8df-0580-46e1-8c51-c6514a1807b8)

![5](https://github.com/user-attachments/assets/9612f165-886f-47b0-8a99-09443288b583)
