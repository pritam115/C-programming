#include<stdio.h>
int main()
{
    int n,i,j,count,a[100];
    printf("how many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is: ");
      for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("All prime numbers in this array : ");
       for(i=0;i<n;i++)
    {
        count=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                count =1;
                break;
            }
        }
        if(count==0)
            printf("%d ",a[i]);
    }


}
