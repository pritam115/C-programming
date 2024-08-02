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
        sum=sum*10+r;
        temp=temp/10;
    }
    if(num==sum)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    //printf("Reversed number : %d\n",sum);
    getch();
}

