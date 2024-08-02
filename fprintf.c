#include<stdio.h>
int main()
{
    FILE *file;
    char name[200];
    int age;

    file=fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File does not exists\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file,"Name=%s, Age=%d\n",name,age);
        Nprintf("File is written successfully\n");
        fclose(file);

    }

    getch();
}

