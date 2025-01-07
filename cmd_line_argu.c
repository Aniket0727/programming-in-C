#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    // Print the total number of arguments
    printf("Number of arguments: %d\n", argc);
    int add=0;
    // Print each argument
    printf("Arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
        // atoi(str);
        add=add+atoi(argv[i]);
    }
    printf("\naddition: %d",add);

    return 0;
}

// The atoi function converts a string (character array) into an integer