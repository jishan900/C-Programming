#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    FILE * pFile;
    char mystring [100];
    pFile = fopen ("myfile.txt","w");
    if (pFile!=NULL)
    {
        fputs("this is my first file program",pFile);
        fgets(mystring,100,pFile);
        puts(mystring);
        fclose (pFile);
    }
    return 0;
}


{
    FILE * pFile;
    char buffer[100],c;
    pFile = fopen ("myfile.txt","a+");
    if (pFile!=NULL)
    {
        while(fgets(buffer,100,pFile) !=NULL)
        {
            puts(buffer);
        }
    }
    return 0;
}
*/
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
        fputs( buffer,pFile2 );
    }
    fclose (pFile1);
    fclose (pFile2);

    return 0;
}
