#include<stdio.h>
int main()
{
    int n,col,row;
    scanf("%d",&n);
    for(row=n;row>=1; row--)
    {
        for(col=1;col<=row; col++)
        {
            printf(" %c ", col+96);
        }
        printf("\n");
    }
}
