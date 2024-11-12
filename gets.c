#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Reads a string, but with no bounds checking (unsafe)
    printf("You entered: %s\n", str);
    return 0;
}
// Notes:

// Purpose: Reads a string (multiple characters) from standard input.
// Behavior: Reads characters until a newline (Enter) is encountered, storing them in a character array (string). However, it does not perform bounds checking, making it risky and prone to buffer overflow errors. gets() is considered unsafe and deprecated in modern C standards.
// Header: <stdio.h>
// Syntax: char* gets(char *str);