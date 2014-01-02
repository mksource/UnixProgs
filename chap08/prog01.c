#include "apue.h"

int main(int argc,char *argv[])
{

     printf("Process Id = %ld\n",getpid());
     printf("Parent Process Id = %ld\n",getppid());
     printf("Real User Id = %ld\n",getuid());
     printf("Effective User Id = %ld\n",geteuid());
     printf("Real Group Id     = %ld\n",getgid());
     printf("Effective group Id = %ld\n",getegid());
     exit(0);

}
