#include <stdio.h>
#include <stdlib.h>

int main()
{
    void calculate(){
        int a,b;
        char op;
        printf("Enter numbers:");
        scanf("%d %d",&a,&b);

        while(getchar()!='\n');
        printf("Operation + - * /");
        scanf("%c",&op);

        if(op=='+'){
        printf("Result=%d",a+b);
        }
}
}
