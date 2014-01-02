#include "apue.h"

int main(int argc,char *argv[])
{
	if(setenv("ENV2","Value",1))
          err_quit("Could not set environment variable");

        return 0;

}
