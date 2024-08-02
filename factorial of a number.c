#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter the number wants to find out factorial : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

             printf("Factorial = %d",fact);
}
