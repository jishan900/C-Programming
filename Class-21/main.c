#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch,name[50];
    int i;
    for(i=0; i<50; i++)
    {
        ch=getchar();
        name[i]=ch;
        if(ch =='\n')
        {
            name[i] ='\0';

            printf("finish\n");
            break;
        }
        name[i]=ch;
    }
    printf("-->%s\n",name);
    return 0;
}
