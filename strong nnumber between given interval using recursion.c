#include <stdio.h>
/* Function declaration */
long long fact(int num);
void printStrongNumbers(int start, int end);
int main()
{
    int start, end;

    /* Input start and end range */
    printf("Enter the lower limit to find strong number: ");
    scanf("%d", &start);
    printf("Enter the upper limit to find strong number: ");
    scanf("%d", &end);

    printf("All strong numbers between %d to %d are: \n", start, end);
    printStrongNumbers(start, end);

    return 0;
}


/**
 * Print all strong numbers in a given range
 */
void printStrongNumbers(int start, int end)
{
    long long sum;
    int num;

    // Iterates from start to end
    while(start != end)
    {
        sum = 0;
        num = start;

        // Calculate sum of factorial of digits
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10;
        }

        // If sum of factorial of digits equal to current number
        if(start == sum)
        {
            printf("%d, ", start);
        }

        start++;
    }
}



/**
 * Recursively find factorial of any number
 */
long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}
