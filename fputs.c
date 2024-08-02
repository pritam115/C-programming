#include<stdio.h>
int main()
{
    FILE *file;
    char name[200];

    file=fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File does not exists\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your University name: ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File is written successfully\n");
        fclose(file);

    }

    getch();
}
