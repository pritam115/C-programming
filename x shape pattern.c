
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if( col==row || row+col== n+1)

                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}
