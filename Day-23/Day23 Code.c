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


|---------------------------------------------------------------------------|
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void calculate_area(char shape, float a, float b, float *area) {
    switch (shape) {
        case 'C': *area = 3.1416 * a * a; break;  // Circle (radius)
        case 'T': *area = 0.5 * a * b; break;     // Triangle (base, height)
        case 'R': *area = a * b; break;           // Rectangle (length, breadth)
        case 'S': *area = a * a; break;           // Square (side)
        default: *area = -1;
    }
}

int main() {
    int fd1[2], fd2[2]; // Pipe file descriptors
    pid_t pid;

    pipe(fd1); // Pipe from Parent -> Child
    pipe(fd2); // Pipe from Child -> Parent

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    }

    if (pid > 0) { // Parent process
        close(fd1[0]);  // Close read end of first pipe
        close(fd2[1]);  // Close write end of second pipe

        char shape;
        float dim1, dim2;

        printf("Enter shape (C-Circle, T-Triangle, R-Rectangle, S-Square): ");
        scanf(" %c", &shape);

        if (shape == 'C' || shape == 'S') {
            printf("Enter one dimension (radius or side): ");
            scanf("%f", &dim1);
            dim2 = 0;
        } else {
            printf("Enter two dimensions (base & height for triangle, length & breadth for rectangle): ");
            scanf("%f %f", &dim1, &dim2);
        }

        write(fd1[1], &shape, sizeof(shape)); // Send shape
        write(fd1[1], &dim1, sizeof(dim1)); // Send dimension 1
        write(fd1[1], &dim2, sizeof(dim2)); // Send dimension 2
        close(fd1[1]); // Close write end

        wait(NULL); // Wait for child

        float area;
        read(fd2[0], &area, sizeof(area)); // Read calculated area
        close(fd2[0]); // Close read end

        if (area >= 0) {
            printf("Calculated Area: %.2f\n", area);
        } else {
            printf("Invalid shape input!\n");
        }
    } else { // Child process
        close(fd1[1]); // Close write end of first pipe
        close(fd2[0]); // Close read end of second pipe

        char shape;
        float dim1, dim2, area;

        read(fd1[0], &shape, sizeof(shape)); // Read shape
        read(fd1[0], &dim1, sizeof(dim1)); // Read dimension 1
        read(fd1[0], &dim2, sizeof(dim2)); // Read dimension 2
        close(fd1[0]); // Close read end

        calculate_area(shape, dim1, dim2, &area);

        write(fd2[1], &area, sizeof(area)); // Send result to parent
        close(fd2[1]); // Close write end
    }

    return 0;
}

|---------------------------------------------------------------------------|

[2021ict113@fedora ~]$ vi process_example3.c
[2021ict113@fedora ~]$ gcc process_example3.c -o process_example3
[2021ict113@fedora ~]$ ./process_example3
Enter shape (C-Circle, T-Triangle, R-Rectangle, S-Square): T
Enter two dimensions (base & height for triangle, length & breadth for rectangle): 5 6
Calculated Area: 15.00
[2021ict113@fedora ~]$ ./process_example3
Enter shape (C-Circle, T-Triangle, R-Rectangle, S-Square): C
Enter one dimension (radius or side): 7
Calculated Area: 153.94
[2021ict113@fedora ~]$ ./process_example3
Enter shape (C-Circle, T-Triangle, R-Rectangle, S-Square): R
Enter two dimensions (base & height for triangle, length & breadth for rectangle): 5 8
Calculated Area: 40.00
[2021ict113@fedora ~]$ ./process_example3
Enter shape (C-Circle, T-Triangle, R-Rectangle, S-Square): S
Enter one dimension (radius or side): 6
Calculated Area: 36.00


