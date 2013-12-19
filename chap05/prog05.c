#include "apue.h"

int main(){

    FILE *pFile;
    int ch;
    char buffer[256];

    pFile=fopen("/home/karthik/StevensProgs/chap05/file3","r+");
    if(pFile==NULL)
      err_quit("Could not open the file3 using fopen");
    while(!feof(pFile))
    {
 
        ch=getc(pFile);
        if(ch==EOF)break;
        if(ch=='#')ungetc('@',pFile);
        else ungetc(ch,pFile);
        if(fgets(buffer,255,pFile)!=NULL)
           fputs(buffer,stdout);
           

    }
 
      

}
