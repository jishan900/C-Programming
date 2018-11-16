#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/*
int main()
{
    int x=10,r;
    r=my_sqr(x);
    printf("%d",r);
    return 0;
}

int main()
{
    void clear_data(int x);
    int x=10;
    clear_data(x);
    printf("%d",x);
    return 0;
}

int main()
{
    void print_array(int x[5])
    {
        for(i=0; i<5; i++)
        {
            printf("%d ",x[i]);
        }
    }
}
*/
int main()
{
    int x=20;
    printf("square: %d",my_sqr(x));
    clear_data(x);
    printf("\nx=%d",x);

    return 0;
}
int my_sqr(int m)
{
    return m*m;
}
void clear_data(int xy)
{
    xy=0;
}
void print_array(int a[])
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("%d ",a[i]);
    }
}
