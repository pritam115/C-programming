#include<stdio.h>
int main()
{
    char str1[100],str2[100],i,j;
    i = j = 0;
    printf("Enter a String : ");
    gets(str1);
    while (str1[i] != '\0')
    {
        str2[j] = str1[i];
        i++;
        j++;
    }
    str2[j] = '\0';
    printf("String Copied Successfully.......\n");
    printf("Copied String : %s\n",str2);
    return 0;
}
