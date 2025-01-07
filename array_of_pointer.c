#include <stdio.h>

int main() {
    // Array of pointers to strings
    char *names[] = {"Alice", "Bob", "Charlie", "Diana"};

    // Print all strings using the array of pointers
    printf("Names:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

// Note:char *names[]: An array where each element is a pointer to a string (character array).
// names[i]: Points to the i-th string.
