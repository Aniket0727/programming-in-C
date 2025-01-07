#include<stdio.h>

struct data{
    int roll;
    char name[20];

};
int main()
{
    struct data s1;
    printf("Enter Roll num and Name\n");
    scanf("%d",&s1.roll);
    printf("Roll No: %d",s1.roll);

    scanf("%s",&s1.name);

    printf("\nName: %s",s1.name);

    return 0;
}