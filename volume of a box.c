#include<stdio.h>
int main()
{
    float height,width,length;
    printf("Enter the inputs : ");
    scanf("%f%f%f",&height,&width,&length);
    printf("volume of the box : %f*%f*%f= %.2f\n", height,width,length,height*width*length);
    getch();
}
