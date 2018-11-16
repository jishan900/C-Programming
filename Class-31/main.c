#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pFile;
    char mystring [100];
    pFile = fopen ("D:\\Jishan.txt","w");
    if (pFile!=NULL)
    {
        fputs("this is my first file program",pFile);
        fgets(my string,100,pFILE);
        puts(mystring);
        fclose (pFile);
    }
    return 0;
}
