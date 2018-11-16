#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    int n=10;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("addition is %d\n",sum);
    return 0;
}
