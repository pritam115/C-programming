#include<stdio.h>
void display(int x[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
}

int main()
{
    int n[]={1,2,4,5,8};
    display(n);

}

