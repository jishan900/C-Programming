#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ages[5];

     for(i=4;i>=0;i--){
        printf("Enter age %d :",i+1);
        scanf("%d",&ages[i]);
     }
     printf("We got ages as below ");
     for(i=4;i>=0;i--){
         printf("%d ",ages[i]);
     }
     double sum=0;
     for(i=4;i>0;i--){
         sum=sum+ages[i];
     }
     printf("ages=%.2f",sum/5);
     return 0;
}
