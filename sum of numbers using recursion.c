#include<stdio.h>
int sumOfDigits(int num);
int main()
{
    int num,result;
    printf("Enter an Integer Number : ");
    scanf("%d",&num);

    result = sumOfDigits(num);
    printf("Sum of Digits : %d\n",result);

    getch();
}
int sumOfDigits(int num)
{
    if(num == 0)
        return num;
    else
        return num % 10 + sumOfDigits(num / 10);
}
