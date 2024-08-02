#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age,phone,i,num;

    file=fopen("student,txt","a");

    if(file==NULL)
    {
        printf("File does not exists\n");
    }
    else
    {
        printf("File is opened\n");
        printf("How many students :");
        scanf("%d",&num);
        for(i=1; i<=num; i++)
        {
            printf("Enter students name: ");
            scanf("%s",&name);
            printf("Enter students age : ");
            scanf("%d",&age);
            printf("Enter students phonenumber :");
            scanf("%d",&phone);

            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phone);

        }
        printf("File is written successfully\n");
        fclose(file);
    }
getch();
}
