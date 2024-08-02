#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter the temperature : ");
    scanf("%f",&celsius);
    fahrenheit=(celsius*1.8)+32;
    printf("the temp in fahrenheit= %.2f\n",fahrenheit);
}
