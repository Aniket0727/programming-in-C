#include <stdio.h>
#include <string.h>

int main()
{
    int l;
    char str1[20],ch;
    printf("Enter String: ");
    scanf("%s",str1);
    l=strlen(str1);
    for(int i=0;i<l/2;i++)
    {
        ch=str1[i];
        str1[i]=str1[l-1-i];
        str1[l-1-i]=ch;
    }
    printf("%s",str1);
    return 0;
}
