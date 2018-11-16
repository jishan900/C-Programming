#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10, i=2;

start:
    if (i % 2 == 0)
    {
        goto increment;
    }
    printf("%d ",i);
    increment:
    i++;
    if(i<n)
    {
        goto start;
    }
    return 0;
}
