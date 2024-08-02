#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter the temperature : ");
    scanf("%f",&fahrenheit);
    celsius= (5*fahrenheit-160)/9;
    printf("Temp in celsius = %f\n",celsius);
    return 0;

}
