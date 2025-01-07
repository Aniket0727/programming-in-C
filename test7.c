#include<stdio.h>

int main()
{
    char *ptr;
    char str[]="World";
    ptr=str;
    ptr +=3;
    printf("%s",ptr);
    return 0;
}