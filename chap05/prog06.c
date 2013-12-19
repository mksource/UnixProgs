#include "apue.h"

int main(void)
{
    FILE *fp1=NULL;
    FILE *fp2=NULL;
    int ch;

    fp1=fopen("/home/karthik/StevensProgs/chap05/file3","r");
    fp2=fopen("/home/karthik/StevensProgs/chap05/file4","w");

    if(fp1==NULL)
      err_quit("Could not open file3 for reading");

    if(fp2==NULL)
      err_quit("Could not create file4 for writing");

    while(!feof(fp1))
    {
   
      ch=fgetc(fp1);
      fputc(ch,fp2);
      putchar(ch); 

    }    



 

}
