#include <stdio.h>
#include <stdlib.h>

int prime(int n)
{
    int i,flag=1;

    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int i,p=1,q=10;
    for(i=p; i<q; i++)
    {
        if(prime(i)==1)
        {
            printf("%d\n",i);
        }
    }
}
