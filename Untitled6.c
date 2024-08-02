#include<stdio.h>
int main()
{
    int num,i,sum = 0;
    printf("Enter a Single Number : ");
    scanf("%d",&num);
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == num)
        printf("%d is a Perfect Number\n",num);
    else
        printf("%d is Not a Perfect Number\n",num);
    return 0;
}
