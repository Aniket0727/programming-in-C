#include <stdio.h>

int main() {
    char arr[5] = {'a','b'};
    char *ptr = arr;  // Pointer to the first element of the array

    printf("Pointer address: %p, Value: %d\n", ptr, *ptr);

    // Increment the pointer
    ptr++;
    printf("After incrementing, Address: %p, Value: %d\n", ptr, *ptr);

    // Scale factor based on sizeof(int)
    printf("Scale factor (size of int): %lu bytes\n", sizeof(int));

    return 0;
}


// Note:Scale Factor refers to the size of the data type a pointer points to. 
// It determines how much the pointer moves when incremented or decremented.

// The scale factor ensures that the pointer moves to the next element in an array or data 
// structure without manually calculating memory addresses.