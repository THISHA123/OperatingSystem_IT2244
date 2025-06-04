📬 Message Queue IPC Example in C
This repo contains two simple C programs demonstrating Inter-Process Communication (IPC) using System V message queues.

📝 Programs
Sender (send.c)

🔑 Creates or accesses a message queue

✍️ Reads user input

📤 Sends the message to the queue

Receiver (receive.c)

🔑 Accesses the same message queue

📥 Receives the message from the queue

🖥️ Displays the message

🗑️ Deletes the message queue to clean up resources

⚙️ How It Works
Both use ftok to generate a unique key for the message queue 🔑

Message structure contains:

mesg_type — message type identifier 📄

mesg_text — message content ✉️

msgsnd — sends messages 📤

msgrcv — receives messages 📥

msgctl with IPC_RMID — removes the message queue 🗑️

🚀 Usage

![1 send2](https://github.com/user-attachments/assets/03ac3dab-0017-4e0d-bb95-fe6b53f52c2c)

![4 recive](https://github.com/user-attachments/assets/b668a3e1-a6af-48c0-99c8-8039cf8fd301)


-------------------------------------------------------------------------------------------------------------------------------------

IPC Message Queue Example 🚀

Send & receive messages using System V message queues in C! 💬

How it works:
Generate key 🔑 with ftok

Create/access queue 📨 with msgget

Send message 📨 with msgsnd

Receive message 📥 with msgrcv

Delete queue 🗑️ with msgctl

![3 ](https://github.com/user-attachments/assets/68105a03-53ec-464d-b29a-65500fd2ef4f)

