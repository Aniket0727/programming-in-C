#include <stdio.h>

int main() {
    char num = 'a';
    void* void_ptr = &num;  // Void pointer
    printf("Void pointer: %d\n", void_ptr);
    // Normal pointer
    int* int_ptr = &num;

    printf("Normal pointer: %d\n", int_ptr);        // Dereferencing normal pointer
       // Typecasting void pointer before dereferencing

    return 0;
}


// Note:A void pointer is a pointer that has no associated data type with it. 
// A void pointer can hold an address of any type and can be typecasted to any type.