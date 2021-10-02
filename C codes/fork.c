/*Here is a relevant article for this particular program https://www.geeksforgeeks.org/fork-system-call */

/*Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork() call (parent process). */


#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    /* fork a process */
    fork(); 
    /* the child and parent will execute every line of code after the fork (each separately)*/
    printf("Hello world!\n"); 
    return 0; 
} 

/*Output will be Hello World printed Twice i.e. one from parent process and one from child*/