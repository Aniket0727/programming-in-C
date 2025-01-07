
#include<stdio.h>
int main()
{
    FILE* fptr;
    fptr=fopen("A:/Programming in C/demo.txt","r");
    if(fptr==NULL)
    {
        printf("file is not present");
    }
    else{
        printf("file is  present");

    }
}



// Note: 
// File handling in C is the process in which we create, open, read, write, and close operations on a file.
// Creating a new file – fopen() with attributes as “a” or “a+” or “w” or “w+”
// Opening an existing file – fopen()
// Reading from file – fscanf() or fgets()
// Writing to a file – fprintf() or fputs()
// Moving to a specific location in a file – fseek(), rewind()
// Closing a file – fclose()