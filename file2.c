#include <stdio.h>
#include "shared.h"

int main() {
    printf("Count in main: %d\n", count);  // Access the variable from file1.c
    count = 10;  // Modify the variable
    display();   // Call the function from file1.c
    return 0;
}
