#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("test.text","w");

    if(file==NULL)
    {
        printf("File is not opened");
    }
    else
    {
        printf("file is opened");
        fclose(file);
    }
    getch();
}
