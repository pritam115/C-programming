#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swap : a=%d\n b=%d\n",a,b);

    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swap= a=%d\n b=%d\n",a,b);
}
