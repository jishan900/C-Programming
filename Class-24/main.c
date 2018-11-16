#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int b[2][3],r,c;

    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("r=%d c=%d:",r,c);
            scanf("%d",&b[r][c]);
        }
    }

    for(r=0; r<2; r++)
    {
        printf("\nr=%d :",r);
        for(c=0;c<3;c++)
        {
            printf(" %d",b[r][c]);
        }
    }
    return 0;
}
