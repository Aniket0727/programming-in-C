#include <stdio.h>
#include <conio.h>

int main() {
    char c[20];
    printf("Press any key: ");
    gets(c);  // Reads a single character and displays it immediately
    printf("\nYou pressed: %s\n", c);
    return 0;
}