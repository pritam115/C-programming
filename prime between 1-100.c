#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int count=0,flag=0,i,j;
    for(i=2;i<n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
              printf("%d is prime\n",i);
              count++;
        }

    }
    printf("prime=%d\n",count);

    getch();
}
