#include<stdio.h>
int main()
{
    int n,row,col,count=0;
    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf("  ");
        for(col=1; col<=row; col++)
            printf("%d",col);
        for(col=row-1; col>=1; col--)
            printf("%d",col);



        printf("\n");
    }

}

