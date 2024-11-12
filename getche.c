#include <stdio.h>
#include <conio.h>

int main() {
    char c;
    printf("Press any key: ");
    c = getche();  // Reads a single character and displays it immediately
    printf("\nYou pressed: %c\n", c);
    return 0;
}

// Notes:

// Purpose: Reads a single character from standard input and echoes it on the screen.
// Behavior: The character is immediately displayed on the screen after being typed, without needing to press Enter.
// Header: <conio.h> (non-standard, mainly works on Windows).
// Syntax: int getche();