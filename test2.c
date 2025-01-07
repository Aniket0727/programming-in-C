#include <stdlib.h>

#include <stdio.h>


void g(int *x, int *y)
{
    y=x;
    *y=3;
}
int a=1,b=2;
int main()
{
    g(&a,&b);
    printf("%d%d\n",a,b);
    
    return 0;
    
}