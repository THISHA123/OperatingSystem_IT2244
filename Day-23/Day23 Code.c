#include <stdio.h>
#include <stdlib.h.
#include <unistd.h>
# define MEGSIZE 16

char* msg1 = "hello, world #1";
char* msg2 = "hello, world #2";
char* msg3 = "hello, world #3";

int main(){
	char inbuf[MEGSIZE];
	int p[2], i;
	
	if (pipe(p)<0)
		exit(1);
	
	/* continued */
	/* write pipe */
	
	write(p[1], msg1, MEGSIZE); //write (filedes,message,message size)
	write(p[1], msg2, MEGSIZE);
	write(p[1], msg3, MEGSIZE);
	
	for (i = 0; i < 3; i++){
		/* read pipe */
		read(p[0], inbuf, MEGSIZE); //read(filedes,msg,msgg size)
		printf("%s\n", inbuf);
		
	}
	
	return 0;
}

|---------------------------------------------------------------------------|

[2021ict113@fedora ~]$ vi pipe_demo.c
[2021ict113@fedora ~]$ gcc pipe_demo.c -o pipe_demo
[2021ict113@fedora ~]$ ./pipe_demo
hello, world #1
hello, world #2
hello, world #3

|###################################################################################|
Exercice 1

1.Read two input from user (// parent process)
 name:
 reg no:
 age:
 
2. print the output from the child (//child process)

name:abc
reg no: 2021/ict/01
age:25
 

|---------------------------------------------------------------------------|

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main() {
    char name[50], reg_no[20];
    int age;
    
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter reg no: ");
    fgets(reg_no, sizeof(reg_no), stdin);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    pid_t pid = fork();  // Create child process
    
    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    }
    
    if (pid == 0) {  // Child process
        printf("\n--- Output from Child Process ---\n");
        printf("Name: %s", name);
        printf("Reg No: %s", reg_no);
        printf("Age: %d\n", age);
    } else {  // Parent process
        wait(NULL);  // Wait for child to finish
    }
    
    return 0;
}

|---------------------------------------------------------------------------|

[2021ict113@fedora ~]$ vi process_example.c
[2021ict113@fedora ~]$ gcc process_example.c -o process_example
[2021ict113@fedora ~]$ ./process_example
Enter name: Thisha
Enter reg no: 2021ict113
Enter age: 23

--- Output from Child Process ---
Name: Thisha
Reg No: 2021ict113
Age: 23

|###################################################################################|

Exercice 2 

calculate area of circle , triangle, rectangle , squre

step1:
parent process get input from user
step2

sendind those inputs to child process

step3
child process geting those inputs

from parent and doing calculations

step4

send the calcu;lation values to parent
step 5
parent print the output




