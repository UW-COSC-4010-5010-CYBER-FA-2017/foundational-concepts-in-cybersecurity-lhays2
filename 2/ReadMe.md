// Process Isolation

process isolation is the concept of keeping things seperate that do not or should not interact with eachother.

This program is desined to show what happens when two pieces try to take a variable "counter" and perform different iperations on it.

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
```
