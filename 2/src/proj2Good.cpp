#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int counter = 50;

// main
int main(int argc, char **argv)
{
    int status;
    printf("--beginning of program\n");

    
    pid_t pid = fork();

    if (pid == 0)
    {
        // child process
        for (int i = 0; i < 50; ++i) // decrement 50 times 
        {
            printf("child process: counter=%d\n", --counter);
            sleep(.1); // This is to make the code not run all at one time
        }
    }
    else if (pid > 0)
    {
        // parent process
        for (int j = 0; j < 50; ++j) // increment 50 times
        {
            printf("parent process: counter=%d\n", ++counter);
            sleep(.1);
        }
    wait(&status); 
    }
    else
    {
        // fork failed
        printf("fork() failed!\n");
        return 1;
    }
   
    printf("--end of program--\n");

    return 0;
}
