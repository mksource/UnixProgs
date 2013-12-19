#include "apue.h"

int main()
{

	FILE *fp=NULL;
        int ch;
 
        if((fp=fopen("/home/karthik/StevensProgs/chap05/file1","r+"))==NULL)
           err_quit("could not open the file using fopen");

        while((ch=getc(fp))!=EOF)
            printf("%c",(char)ch); 
        


}
