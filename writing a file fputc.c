#include<stdio.h>
int main()
{
    FILE *file;
    char name[300]="   Green University of bangladesh ";
    int length=strlen(name);
    int i;

    file=fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File does not exists\n");
    }
    else
    {
        printf("File is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }

    getch();
}
