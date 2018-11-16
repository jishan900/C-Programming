#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter your subject number :");
    scanf("%d",&n);
    if (n>=80)
    printf("Your grade number is : A+");

    else if (n>=70&&n<=79)
    printf("Your grade number is : A");

    else if (n>=60&&n<=69)
    printf("Your grade number is : A-");

    else if (n>=50&&n<=59)
    printf("Your grade number is : B");

    else if (n>=40&&n<=49)
    printf("Your grade number is : C");

    else if (n>=33&&n<=39)
    printf("Your grade number is : D");

    else if (n>=0&&n<=33)
    printf("Your grade number is : F");

    return 0;
}
