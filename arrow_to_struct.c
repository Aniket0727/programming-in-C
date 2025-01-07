#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
};

int main() {
    struct Student student1 = {101, "Alice"};

    // Declare a pointer to the structure
    struct Student *ptr = &student1;

    // Access members using the arrow operator
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    return 0;
}
