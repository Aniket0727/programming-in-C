#include <stdio.h>

// Function to double the value of a number using pass by reference
void doubleValue(int *num) {
    *num = *num * 2;  // Dereference the pointer and double the value
}
int main() {
    int a = 5;
    
    // Display value before doubling
    printf("Before doubling: %d\n", a);
    // Pass the address of 'a' to the function (pass by reference)
    doubleValue(&a);
    // Display value after doubling
    printf("After doubling: %d\n", a);
    
    return 0;
}

// Note:Pass by reference is achieved using pointers.
// The function can directly modify the original variable.
// You pass the address of the variable (using &) to the function.
