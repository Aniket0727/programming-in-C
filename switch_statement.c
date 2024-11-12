#include<stdio.h>

int main()
{
       int var = 2;

    // declaring switch cases
    switch (var) 
    {
    case 1:
        printf("Case 1 is executed");
        break;
    case 2:
        printf("Case 2 is executed");
        break;
    default:
        printf("Default Case is executed");
        break;
    }

    return 0;    
}