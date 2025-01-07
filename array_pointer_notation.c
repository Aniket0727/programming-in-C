#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Accessing array elements using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nAccessing array elements using pointer notation:\n");
    for (int i = 0; i < 5; i++) {
        // printf("*(ptr + %d) = %d\n", i, *(ptr + i));
        printf("arr[%d] = %d\n",i,*(ptr + i));
    }
    return 0;
}
