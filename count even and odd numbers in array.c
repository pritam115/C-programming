#include<stdio.h>
int main()
{
    int num,arr[100],evenCount,oddCount,i;
    evenCount = oddCount = 0;
    printf("How many numbers do you want to work with : ");
    scanf("%d",&num);
    printf("Enter those numbers : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < num; i++)
    {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Even Numbers in this Array : %d\n",evenCount);
    printf("Odd Numbers in this Array  : %d\n",oddCount);
    return 0;
}

