#include <stdio.h>

int factorial(int n) {
    if (n == 0) {  // Base case
        return 1;
    }
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}


// Note:
// Let’s go through each call of factorial(5):

// factorial(5):

// Calls 5 * factorial(4)
// factorial(4):

// Calls 4 * factorial(3)
// factorial(3):

// Calls 3 * factorial(2)
// factorial(2):

// Calls 2 * factorial(1)
// factorial(1):

// Calls 1 * factorial(0)
// factorial(0) (Base case):

// Returns 1
// Now, the results start returning up the chain:

// factorial(1) returns 1 * 1 = 1
// factorial(2) returns 2 * 1 = 2
// factorial(3) returns 3 * 2 = 6
// factorial(4) returns 4 * 6 = 24
// factorial(5) returns 5 * 24 = 120