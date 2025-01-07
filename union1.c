#include<stdio.h>
#include<string.h>

union data{
    int roll;
    char name[20];

};
int main()
{
    union data s1;
    s1.roll=10;
    strcpy(s1.name, "anu");
    printf("Roll No: %d",s1.roll);
    printf("\nName: %s",s1.name);
    
    return 0;
}

// Note:A union is a user-defined data type in C that allows multiple members to share the same memory location. 
// This means only one member of a union can store a value at any given time, as all members share the same memory.


// Advantages:
// Efficient Memory Usage: Unions save memory as all members share the same space.

// Disadvantages:
// Limited Simultaneous Use: Only one member can hold valid data at a time.