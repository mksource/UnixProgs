#include "apue.h"

int main(){

    FILE* fp=NULL;
    char buffer[128];

    fp=fopen("/home/karthik/StevensProgs/chap05/file3","r+");
    if(fp==NULL)
      err_quit("could not open file1 using fopen");
    while(fgets(buffer,128,fp)!=NULL)
          fputs(buffer,stdout);


}
