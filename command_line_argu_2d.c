#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char args[10][50]; // Array to store up to 10 arguments, each up to 49 characters long

    // Copy arguments into the 2D array
    for (int i = 0; i < argc; i++) {
        strncpy(args[i], argv[i], 49);
        args[i][49] = '\0'; // Ensure null-termination
    }

    // Print the arguments from the 2D array
    printf("Stored arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("args[%d] = %s\n", i, args[i]);
    }

    return 0;
}

// Note: 
// int argc: argc stands for argument count. 
// It represents the number of command-line arguments passed to the program, including the program's name itself.

// char *argv[]
// argv stands for argument vector. 
// It's an array of C strings (character pointers) representing the command-line arguments.