#include <stdio.h> 
  
int main() 
{ 
    int num; 
    printf("Enter Num: ");
    scanf("%d",&num);
    if (num % 2 == 0) 
        goto even; 
    else
        goto odd; 
  
even: 
    printf("%d is even", num); 
    return 0;
odd: 
    printf("%d is odd", num); 
    return 0; 
}

// Note:The goto statement is used to jump to a specific point from anywhere in a function.
// It is used to transfer the program control to a labeled statement within the same function.