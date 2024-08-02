#include<stdio.h>
int fact (int n);
int main()
{
    int x;
    printf("Enter the number which you want to find the factorial : ");
    scanf("%d",&x);
    int result=fact(x);
    printf("Factorial = %d\n",result);
}

int fact (int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
