// Process Isolation

process isolation is the concept of keeping things seperate that do not or should not interact with eachother.

This program is designed to show what happens when two pieces try to take a variable "counter" and perform different iperations on it.

in the good example our code seperates the running program into two different processes.

```
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
```
A global variable is created at the start of the program. Afterwards a child process is created that decrements the counter fifty times. the parent process procedes to increment the counter fifty times. in this example the parent spawns the child process with a copy of all the resources thus seperating them out. Runnning the code will show that the parent process counter is at 100 while the child process is at 0 

In the bad example we have a very similar setup. This time however we have threads instead of processes.
```
void *min(void *id){
        for (int i = 0; i < 50; ++i) // decrement 50 times 
        {
            printf("child process: counter=%d\n", --counter);
            sleep(.1); // This is to make the code not run all at one time
            
        }
}

// The parent thread to 
// increment to 100 
void *max(void *id){
        for (int j = 0; j < 50; ++j) // increment 50 times
        {
            printf("parent process: counter=%d\n", ++counter);
            sleep(.1);
        }
}
```
in this code the two threads do not create copies of the variables but instead share them. because of this running the program the two threads fight over the counter and it ends up back at 50. 
