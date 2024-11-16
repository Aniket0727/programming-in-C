
// C program to illustrate the break in c loop 
#include <stdio.h> 
int main() 
{ 
    int i; 
    // for loop 
    for (i = 1; i <= 10; i++) { 
  
        // when i = 6, the loop should end 
        if (i == 6) { 
            break; 
        } 
        printf("%d ", i); 
    } 
    printf("Loop exited.\n"); 
    return 0; 
}


// Note:The break statement is used to exit from loops (for, while, do-while) or switch cases prematurely.