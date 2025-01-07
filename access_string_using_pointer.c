#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = str; // Pointer to the string

    // Print string using the pointer
    printf("String using pointer: %s\n", ptr);

    // Access individual characters using the pointer
    printf("Characters in the string:\n");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++; // Move to the next character
    }

    return 0;
}
