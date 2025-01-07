#include <stdio.h>

#define TO_STRING(x)  #x

int main() {
    int value = 5;
    printf("Stringified value: %s\n", TO_STRING(value));  // Outputs: "value"
    return 0;
}

// TO_STRING(value) will convert value into a string "value".
// The result of the macro will be "value", not the value of the variable.
