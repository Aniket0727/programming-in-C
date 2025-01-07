
// read all data from file
#include<stdio.h>
int main()
{
    FILE* fptr;
    fptr=fopen("A:/Programming in C/demo.txt","rb");
    char c;
    fseek(fptr,5,SEEK_SET);
    
    while ((c=fgetc(fptr))!=EOF)
    {
        fputc(c,stdout);
    }
    printf("\nftell:%u", ftell(fptr));
    
    fclose(fptr);
    
}

// ftell(): current position of the file pointer in a file stream
//fseek(): To move the file pointer to a specific location in a file