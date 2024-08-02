#include<stdio.h>
int main()
{
    FILE *file;
    char ch;

    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exists\n");
    }
    else
    {
        printf("file is opened\n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        fclose(file);

    }

    getch();
}
