#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend=32,divisor=5,q,r;

    q=dividend/divisor;
    r=dividend%divisor;
    while(r!=0)
    {
        dividend=divisor;
        divisor=r;
        q=dividend/divisor;
        r=dividend%divisor;
    }
    printf("gcd=%d",divisor);
    return 0;
}
