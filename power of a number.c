#include<stdio.h>
int main()
{
    int base,exp,result;
    printf("Enter the base value : ");
    scanf("%d",&base);
    printf("Enter the exp value : ");
    scanf("%d",&exp);
    result=pow(base,exp);
           printf("Result= %d\n",result);

    return 0;
}
