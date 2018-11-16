#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter your subject number = ");
    scanf("%d",&n);
    if (n>=90)
    printf("Your grade is: A+ ");

    else if (n>=85&&n<=89)
    printf("Your grade is: A ");

    else if (n>=80&&n<=84)
    printf("Your grade is: A- ");

    else if (n>=75&&n<=79)
    printf("Your grade is: B ");

    else if (n>=0&&n<=74)
    printf("Your grade is: F ");

    return 0;
    }
