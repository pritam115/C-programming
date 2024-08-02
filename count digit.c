#include<stdio.h>
int main()
{
    int n,count;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits: %d",count);
}
