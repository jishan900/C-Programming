#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pFile;
    char mystring[100];
    pFile=fopen("myfile.txt","r");
    if(pFile==NULL)
    {
        printf("File not exist.");
        exit(1);
    }
    while(fgets(mystring,100,pFile) !=NULL)
    {
        int len=strlen(mystring);
        printf("[%d] ",len);
        searchAndReplace(mystring,len,'a','x');
        puts(mystring);
    }
    fclose(pFile);
    return 0;
}
void searchAndReplace(char data[],int len,char search,char replace){
    for(i=0;i<-1,i--){
    if
    }
}
