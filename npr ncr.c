
#include<stdio.h>
int main()
{
    int range,arr[100],prime[100],i,j,k,count;
    i = j = k = count = 0;
    printf("Enter Range : ");
    scanf("%d",&range);
    printf("Enter the Numbers : \n");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < range; i++)
    {
        count = 0;
        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            prime[k] = arr[i];
            k++;
        }
    }

    printf("Printing Prime Numbers From Above Array : \n");
    for(i = 0; i < k; i++)
    {
        printf("%d  ",prime[i]);
    }
    return 0;
}
