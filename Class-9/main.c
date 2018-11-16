/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=;
    do{
        printf("%d",n);
        n++;
    } while (n<=10);

    return 0;
}

*/

#include <stdio.h>


int main()
{
    int choice;
    do{
        mycount();
        printf("\ncontinue ? 1/0 ");
        scanf("%d",&choice);

    }   while (choice == 1);
    return 0;
}
void mycount (){
    int n=1;
    do {
        printf("%d ",n);
        n++;
           } while (n<=10);
}
