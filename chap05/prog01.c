#include "apue.h"
#include <fcntl.h>

int main(void)
{
     FILE *fp1=NULL;
     FILE *fp2=NULL;
     FILE *fp3=NULL;
     int fd;

     fp1=fopen("/home/karthik/StevensProgs/chap05/file1","r");
     if(fp1==NULL)
       err_msg("Cannot open the file1 using fopen");

     printf("opened file1 for reading");

     fp2=freopen("/home/karthik/StevengsProgs/chap05/file1","a+",fp1);
     if(fp2==NULL)
       err_msg("could not reopen file1 for writing");
     printf("opened file1 for append");
   
     if((fd=open("/home/karthik/StevensProgs/chap05/file2",O_RDWR | O_APPEND))<0)
       err_sys("open error");

     fp3=fdopen(fd,"w");
     
     if(fp3==NULL)
        printf("failed to open file2 using fdopen");

     printf("opened file2 using fdopen");

     close(fd);
     fclose(fp1);
     fclose(fp2);
     fclose(fp3);	      

}
