#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0,a[100];
    printf("How many numbers :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is= ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("Even numbers array : ");
    for(i=2;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d",a[i]);
        }
        else
            printf("Odd numbers array : ");
        for(i=2;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                printf("%d",a[i]);
            }
        }
    }
}
