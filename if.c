#include<stdio.h>
int main()
{
    int a=10;
    int b;
    b=(10,20);
    printf("%d\n",b);
    if(a>1)
    {
        printf("%d",a);
    }

    printf("\n%d", 10  & 5);
    printf("\n%d",~10);
    return 0;
}