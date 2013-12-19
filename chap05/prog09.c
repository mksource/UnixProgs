#include "apue.h"

int main(){

    FILE *pFile=NULL;
    fpos_t position;

    pFile=fopen("/home/karthik/StevensProgs/chap05/file6","w+");
    if(pFile==NULL)
       err_sys("fopen failed");

    fgetpos(pFile,&position);
    fputs("This is a sample file",pFile);
    fsetpos(pFile,&position);
    fputs("That",pFile);
    fclose(pFile);
    return 0; 
    


}
