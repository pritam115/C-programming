#include<stdio.h>
int main()
{
    int num,i,j,count = 0;
    printf("Enter the Range : ");
    scanf("%d",&num);
    printf("Prime Numbers Upto %d are : ",num);
    for(i = 1; i <= num; i++)
    {
        count = 0;
        for(j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if(count == 2)
        {
            printf("%d  ",i);
        }
    }
    return 0;
