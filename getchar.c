#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();  // Reads a single character
    printf("You entered: %c\n", c);
    return 0;
}




// Notes
// Purpose: Reads a single character from standard input (usually the keyboard).
// Behavior: Requires pressing Enter after typing a character. The character is then echoed (displayed) on the screen.
// Header: <stdio.h>
// Syntax: int getchar();