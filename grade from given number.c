#include<stdio.h>
int main()
{
    float num;
    printf("Enter the number : ");
    scanf("%f",&num);

    if(num>=91 && num<=100)
        printf("A+");
    else if(num>=81 && num<91)
        printf("A+");
    else if(num>=70 && num<=79)
        printf("A");
    else if(num>=60 && num<=69)
        printf("A-");
    else if(num>=50 && num<=59)
        printf("B");
    else if(num>=40 && num<=49)
        printf("C");
    else if(num>=33 && num<=39)
        printf("D");
    else if( num<33)
        printf("F");
    else
        printf("invalid");

    return 0;
}
