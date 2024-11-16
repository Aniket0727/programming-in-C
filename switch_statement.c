#include<stdio.h>

int main()
{
       char ch;
       printf("Enter Character: ");
       scanf("%c",&ch);

    // declaring switch cases
    switch (ch) 
    {
    case 'a':
        printf("Its a");
        break;
    case 'b':
        printf("Its b");
        break;
    default:
        printf("Its not a and b");

    }

    return 0;    
}