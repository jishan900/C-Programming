#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("How old are you ? :");
    scanf("%d",&age);

    if(age<=18)
    printf("you are a kid");

    else if(age<=18&&age>=22)
    printf("you are a teenage");

    else if(age<=23&&age>=35)
    printf("you are mid aged");

    else
    printf("you are quite old");

    return 0;
}
