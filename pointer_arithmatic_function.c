#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = arr;           // Points to arr[0]
    int *p2 = &arr[4];       // Points to arr[4]

    printf("Initial pointer values:\n");
    printf("p1 points to value: %d\n", *p1);
    printf("p2 points to value: %d\n\n", *p2);

    // Incrementing a pointer
    p1++;
    printf("After incrementing p1: %d\n", *p1); // Points to arr[1]

    // Decrementing a pointer
    p2--;
    printf("After decrementing p2: %d\n", *p2); // Points to arr[3]

    // Adding to a pointer
    p1 = p1 + 3;
    printf("After adding 2 to p1: %d\n", *p1); // Points to arr[3]

    // Subtracting from a pointer
    p2 = p2 - 1;
    printf("After subtracting 1 from p2: %d\n", *p2); // Points to arr[2]

    // Pointer difference
    int diff = p2 - p1;
    printf("Difference between p2 and p1: %d\n", diff); // Should show the number of elements between the pointers

    // Comparing pointers
    if (p1 < p2) {
        printf("p1 is before p2\n");
    } else {
        printf("p1 is not before p2\n");
    }

    return 0;
}


// Note:
// Pointer Arithmetic in C
// Pointer arithmetic allows manipulation of memory addresses for efficient data access and navigation. Here's a quick summary:

// Increment (p++)
// Moves the pointer to the next memory location based on the data type size.

// Decrement (p--)
// Moves the pointer to the previous memory location.

// Addition (p + n)
// Moves the pointer forward by n elements.

// Subtraction (p - n)
// Moves the pointer backward by n elements.

// Pointer Difference (p2 - p1)
// Calculates the number of elements between two pointers.

// Pointer Comparisons (==, !=, <, >)
// Compares pointers to check equality or relative memory position.