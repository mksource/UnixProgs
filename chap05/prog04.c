#include "apue.h"

int main(void)
{
	FILE *fp=NULL;
        int ch;

        if((fp=fopen("/home/karthik/StevensProgs/chap05/file1","r+"))==NULL)
           printf("Could not open file1 using fopen");

        //Clear the error and eof flags
        clearerr(fp);

        while((ch=fgetc(fp))!=EOF)
             printf("%c",(char)ch);

        if(ferror(fp))
             printf("Error in the stream cannot read further");
        
        if(feof(fp))
             printf("End of file in the stream");

        exit(0);  
        

}
