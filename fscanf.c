#include<stdio.h>
int main()
{
    FILE *file;
    char fname[200];
    char lname[200];
    int age;

    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exists\n");
    }
    else
    {
        printf("File is opened\n");
        fscanf(file,"%s %s %d",&fname,&lname,&age);
        printf("%s %s %d",fname,lname,age);
    }
    printf("\nFile is written successfully\n");
    fclose(file);


    getch();
}
