#include <stdio.h>
#include <unistd.h>

// fork() is a function in C that creates a new process (called the child process) from the current process (called the parent process).
// the line at which fork is called , it makes an exact copy of the parent process. Both the parent and child processes start executing from the point where fork() was called.
// In the parent process, fork() returns the child's process ID.In the child process, fork() returns 0.If something goes wrong, fork() returns -1 (indicating an error) 


int main(){
    int x;

    FILE *fd;
    x = fork();// Forking the process
    // Returns a positive value in the parent process, which is the child's process ID.

    if (x < 0) {
        // Error handling for fork
        printf("Fork failed!\n");
        exit(1);
    }

    while(1){
        fd = fopen("test.txt","a"); // Opening file for appending

        // The parent and child processes now execute the same code inside the while(1) loop. Both processes open the file test.txt and append their respective x value to it.

        if(fd == NULL)
        {
            // If file open fails, print error and exit
            printf("Failed to open file!\n");
            exit(1);
        }

        fprintf(fd,"%d\n",x);
        // Let’s assume the process ID of the parent process is 1234. The contents of the test.txt file could look like this:1234 0
        // The parent process writes 1234, and the child process writes 0 every 2 seconds.
        fclose(fd);
        sleep(2);
    }
    return 0;
}

// Both parent and child processes run this infinite loop, writing to the file every 2 seconds.