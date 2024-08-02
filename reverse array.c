#include<stdio.h>
int main()
{
    int num,arr[100],i;
    printf("How many numbers do you want to work with : ");
    scanf("%d",&num);
    printf("Enter those numbers : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nReverse Array : \n");
    for(i = num - 1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
