#include <stdio.h>

void modifyValue(int num) {
    num = num + 10;  // Modify the local copy of num
    printf("Inside modifyValue function: %d\n", num);
}

int main() {
    int a = 5;
    printf("Before modifyValue function: %d\n", a);
    
    // Passing the value of 'a' to the function
    modifyValue(a);

    // 'a' is not modified because the function works with a copy
    printf("After modifyValue function: %d\n", a);
    
    return 0;
}


// Note:In C, pass by value means that when you pass an argument to a function, a copy of the argument's value is made and passed to the function.
//  The function works with this copy, and any changes to the parameter inside the function do not affect the original value outside the function.