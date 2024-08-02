#include<stdio.h>
void display(char x[]);
int main()
{
    char str[50];
    printf("Enter the string: \n");
    gets(str);
    display(str);
}
void display(char x[])
{
    int i=0;
    while(x[i]!='\0')
    {
        printf("%c",x[i]);
        i++;
    }
}
