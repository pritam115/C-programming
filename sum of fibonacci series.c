#include<stdio.h>
int main()
{
    int num,first,second,fibo,sum = 0;
    printf("Enter the Number Upto You Want to See Fibonacci Series : ");
    scanf("%d",&num);

    first = 0;
    second = 1;
    fibo = first + second;

    printf("Fibonacci Series Upto %d : ",num);
    printf("%d %d %d ",first,second,fibo);
    sum = sum + fibo;

    while(num > fibo)
    {
        sum = sum + fibo;
        printf("%d ",fibo);
        first = second;
        second = fibo;
        fibo = first + second;
    }
    printf("\nSum of Fibonacci Series Upto %d : %d\n",num,sum);
    return 0;
}
