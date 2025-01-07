#include <stdio.h>

int main() {
    int *ptr,a=10;  // Wild pointer as it is not initialized
    ptr=&a;
    // *ptr = 20;  // Dereferencing the wild pointer (undefined behavior)
    printf("%d\n", *ptr);
    printf("%d\n", ptr);

    return 0;
}
