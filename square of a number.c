#include<stdio.h>
 int square(int a)
 {
     return  a*a;

 }
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);

    int result = square(n);
    printf("square of the integer number is : %d\n",result);
}
