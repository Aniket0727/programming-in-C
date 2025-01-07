#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
};

int main() {
    struct Student s1[2];

    printf("Enter Student Data:\n");
    // Access members using the arrow operator
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%d %s" ,&s1[i].rollNo,&s1[i].name);
    }
       for(i=0;i<2;i++)
    {
    printf("Student No.%d\n",i+1);
    printf("Roll No: %d\n", s1[i].rollNo);
    printf("Name: %s\n", s1[i].name);
    }
    return 0;
}
