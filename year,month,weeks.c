#include<stdio.h>
int main()
{
   int days, years, weeks, months;
   printf("Enter Days:");
   scanf("%d",&days);
   years=days/365;
   weeks=days/7;
   months=days/30;
   printf("Days to years %d",years);
   printf("\nDays to weeks %d",weeks);
   printf("\nDays to months %d",months);
}
