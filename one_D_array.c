#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}


// Notes:An array in C is a fixed-size collection of similar data items stored in contiguous memory locations. 
// It can be used to store the collection of primitive data types such as int, char, float, etc., 
// and also derived and user-defined data types such as pointers, structures, etc.