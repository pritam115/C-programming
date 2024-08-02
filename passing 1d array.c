#include<stdio.h>
void displaynumbers(int n[]);
int main()
{
    int num[4];
    int i,j;
    printf("Enter 4 numbers :\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&num[i]);
    }
    displaynumbers(num);
    return 0;
}

void displaynumbers(int n[])
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d ",n[i]);
    }

}
