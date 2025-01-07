// copy content from one file to another file

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr1,*fptr2;
    char ch;
    fptr1=fopen("source.txt","r");

    if(fptr1==NULL)
    {
        printf("\n File NOt Found");
        return 0;
    }
    fptr2=fopen("desti.txt","w");

    if(fptr2==NULL)
    {
        printf("\n File Not Found");
    }
    ch=fgetc(fptr1);
    while(ch!= EOF)
    {
        fputc(ch,fptr2);
        ch=fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);

}