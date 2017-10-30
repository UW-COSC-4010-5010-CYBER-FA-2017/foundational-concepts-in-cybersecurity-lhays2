#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <cstdlib>
int counter = 50;
int min_i = 0, max_i = 0;

// The parent thread to 
// deccrement to 0 
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

int main(int argc, char **argv)
{
    
    printf("--beginning of program\n");

    
    pthread_t min_t;
    pthread_t max_t;
    
    printf("min launch\n");
    if (pthread_create(&min_t, NULL, min, &min_i)) {
       perror("error creating the thread");
       exit(1);
    }
    printf("min launch\n");
    if (pthread_create(&max_t, NULL, max, &max_i)) {
       perror("error creating the thread");
       exit(1);
    }
    
    pthread_join(min_t,NULL);
    pthread_join(max_t,NULL);
    printf("--end of program--\n");

    return 0;
}
