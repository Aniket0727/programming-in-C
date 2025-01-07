#include <stdio.h>

struct Flags {
    unsigned int isReady : 1;   // 1 bit
    unsigned int isRunning : 1; // 1 bit
    unsigned int hasError : 1;  // 1 bit
};

int main() {
    struct Flags status = {0}; // Initialize all fields to 0

    // Set some flags
    status.isReady = 1;
    status.isRunning = 0;
    status.hasError = 1;

    // Print the values of the flags
    printf("isReady: %u\n", status.isReady);
    printf("isRunning: %u\n", status.isRunning);
    printf("hasError: %u\n", status.hasError);

    return 0;
}




// Note: A bit field in C is a way to specify and allocate a specific number of bits within a structure to represent data. 

// Advantages:
// Saves memory by using only the required number of bits.
// Simplifies the representation of flags or hardware registers.

// Limitations:
// Bit fields cannot be accessed using pointers.
// Operations may be slower than on regular integers.
// Bit fields are not guaranteed to be portable due to differences in implementation by compilers.