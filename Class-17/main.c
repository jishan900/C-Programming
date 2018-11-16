#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=10;
    double sum=0;
    for(i=1;i<=n;i++){
        printf("%d ",i);
        sum+=i;
    }
    printf("\nAverage is %.101f",sum/n);
    return 0;
}
