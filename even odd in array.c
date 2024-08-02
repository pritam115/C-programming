#include<stdio.h>
int main()
{
    int a[100],even[100],odd[100],n,i,j,k;
     i=j=k=0;
    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    printf("\nEven numbers array");
    for(i=0;i<j;i++)
        printf("%d ",even[i]);

     printf("\nOdd numbers array");
    for(i=0;i<k;i++)
        printf("%d ",odd[i]);
}
