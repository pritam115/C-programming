#include<stdio.h>
int main()
{
    int n,num1,num2,num3,reverse;
    printf("Enter the number which you want to reverse : ");
    scanf("%d",&n);

    num1=n/100;
    num2=(n%100)/10;
    num3=n%10;

    reverse= num3*100+num2*10+num1;

    printf("Reverse number is = %d\n ",reverse);

}
