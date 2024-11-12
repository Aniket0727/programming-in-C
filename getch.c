#include <stdio.h>
#include <conio.h>

int main() {
    char c;
    printf("Press any key: ");
    c = getch();  // Reads a single character without displaying it
    printf("\nYou pressed: %c\n", c);
    return 0;
}


// Notes:

// Purpose: Reads a single character from standard input, but does not require pressing Enter.
// Behavior: Does not echo the character on the screen. Typically used for taking sensitive inputs, such as passwords.
// Header: <conio.h> (non-standard, mainly works on Windows).
// Syntax: int getch();