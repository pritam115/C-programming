#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter two numbers : ");
    scanf("%f%f",&num1,&num2);
    //result=num1/num2;
    printf("%f/%f = %.2f\n",num1, num2, num1/num2);
    return 0;
}
