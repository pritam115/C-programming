#include<stdio.h>
int main()
{
    int n1,n2,q,r;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    q= n1/n2;
    r= n1%n2;
    printf("quotient = %d\n ", q);
    printf("reminder = %d\n",r);
    getch();

}
