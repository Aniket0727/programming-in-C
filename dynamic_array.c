#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocate memory for 5 integers
    arr = (int *)malloc(size * sizeof(int));

    // Initialize the array
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Access and print elements
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Resize the array to hold 10 integers
    size = 10;
    arr = (int *)realloc(arr, size * sizeof(int));

    // Initialize the new elements
    for (int i = 5; i < size; i++) {
        arr[i] = i + 1;
    }

    // Print the updated array
    printf("\nAfter resizing:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}


// Note:
// realloc (Reallocate Memory) :Resizes a previously allocated memory block to a new size.

// malloc (Memory Allocation) :Allocates a block of memory of a specified size during runtime.