#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pFile1, *pFile2;
    char buffer[100];
    pFile1 = fopen("main.c","r");
    pFile2 = fopen("output.txt","w");

    if(pFile1 == NULL)
    {
        printf("Failed to open file input.txt");
        exit(1);
    }
    if(pFile2 == NULL)
    {
        printf("Failed to open file output.txt");
        exit(1);
    }

    while ( fgets(buffer, 100 ,pFile1) !=NULL)
    {
        puts( buffer );
    }
    fclose (pFile1);
    fclose (pFile2);

    return 0;
}
