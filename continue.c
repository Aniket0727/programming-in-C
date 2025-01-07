
// C program to illustrate the break in c loop 
#include <stdio.h> 
int main() 
{ 
    int i; 
    // for loop 
    for (i = 1; i <= 10; i++) { 
  
        // when i = 6, the loop should end 
        if (i == 6) { 
            continue; 
        } 
        printf("%d ", i); 
    } 
    printf("Loop exited.\n"); 
    return 0; 
}


// Note:The continue statement skips the current iteration of a loop and proceeds to the next iteration..