#include<stdio.h>
void displaynumbers(int n[2][2]);
int main()
{
    int num[2][2];
    int i,j;
    printf("Enter 4 numbers :\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    displaynumbers(num);
    return 0;
}

void displaynumbers(int n[2][2])
{
    int i;
    int j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",n[i][j]);
        }
    }
}
