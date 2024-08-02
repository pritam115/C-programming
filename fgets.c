#include<stdio.h>
int main()
{
    FILE *file;
    char ch[500];

    file=fopen("test.txt", "r");
    if(file==NULL)
    {
        printf("File does not exists\n");
    }
    else
    {
        printf("File is opened");
        while(!feof(file))
        {
            fgets(ch,100,file);
            printf("%s\n",ch);

        }
        printf("File is written succesfully");
        fclose(file);


    }

    getch();
}
