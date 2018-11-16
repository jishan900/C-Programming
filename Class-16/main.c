#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    int n=10;
    for(i=1;i<=n;i++){
        printf("%d\n",i*i);
        sum+=i;
    }
    printf("sum is %d\n",sum\n);
    return 0;
}
