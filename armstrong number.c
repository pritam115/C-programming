#include<stdio.h>
int main()
{
    int num,sum=0,r,temp;
    printf("Enter an positive number: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(num==sum)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");
    //printf("Reversed number : %d\n",sum);
    getch();
}


