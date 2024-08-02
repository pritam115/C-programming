#include<stdio.h>
int sum(n);

int main()
{
    int num,result;
    printf("Enter a positive number : ");
    scanf("%d",&num);

    result=sum(num);
    printf("Sum of digits = %d",result);

}

int sum(n)
{
    if(n==0)
        return n;
    else
        return n%10+sum(n/10);

}
