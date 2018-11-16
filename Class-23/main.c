#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={17,2,5,99,8};
    int m=0,i;

    for(i=0;i<5;i++){
     if(m<a[i]){
     m=a[i];
    }
     }
     printf("%d ",m);
     return 0;
}
