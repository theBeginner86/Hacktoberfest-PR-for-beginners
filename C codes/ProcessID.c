/*This is a C program to get Process Id and Parent Process Id in an Operating System. This will be helpful for your os practicals*/

/*You can read this article which goes in depth for different types of processes https://www.geeksforgeeks.org/getppid-getpid-linux/*/
#include <stdio.h>
#include <unistd.h>

int main()
{
    int p_id, p_pid;

    p_id = getpid(); /*this function gets the process id*/
    p_pid = getpid(); /*this function gets the parent process id*/

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);

    return 0;
}