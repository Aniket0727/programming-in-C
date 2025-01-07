#include<stdio.h>

struct data{
    int roll;
    char name[20];

};
int main()
{
    printf("Student No.1\n");

    struct data s1={10,"aniket"};
    struct data s2={20,"Rahul"};

    printf("Roll No: %d",s1.roll);
    printf("\nName: %s\n",s1.name);

    printf("\nStudent No.2\n");
    printf("Roll No: %d",s2.roll);
    printf("\nName: %s",s2.name);

    return 0;
}

// Note:A structure in C is a user-defined data type that allows you to group variables of different data types under a single name. 
