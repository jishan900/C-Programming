#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10,i;
    for (i=2;i<n;i++)
    {
        if (i % 2 ==0 )
        {
            continue;
        }
    }
    printf("%d ",i);

    return 0;
}
