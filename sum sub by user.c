#include<stdio.h>

int sum (int a,int b)
{
    printf("The sum is : %d\n",a+b);

}

int sub (int a,int b)
{
    printf("The subtraction is : %d\n",a-b);

}

int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

   int result=sum(n1,n2);
    result=sub(n1,n2);
}
