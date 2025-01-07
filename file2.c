
// read all data from file
#include<stdio.h>
int main()
{
    FILE* fptr;
    fptr=fopen("A:/Programming in C/demo.txt","rb");
    char c=fgetc(fptr);
    printf("%c",c);  //read single char
    
    while ((c=fgetc(fptr))!=EOF)
    {
        fputc(c,stdout);
    }
    fclose(fptr);
    
}