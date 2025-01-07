#include <stdio.h>

#define CONCATENATE(x, y)  x ## y

int main() {
    int xy = 10;  // Declare a variable named xy
    printf("Value of xy: %d\n", CONCATENATE(x, y));  // Outputs: 10
    return 0;
}


// Purpose: To concatenate two tokens into a single token.
// Example: The ## operator combines two tokens into a new one.