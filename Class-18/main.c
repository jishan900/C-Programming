#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,m=1,n=1;
    int fib = 0;
        for(i=3;i<=7;i++){
        fib = m + n;
        m=n;
        n=fib;
        printf("i=%d fib=%d\n",i,fib);
        }

        return 0;
}
