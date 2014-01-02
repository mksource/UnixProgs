#include "apue.h"

int main(int argc,char *argv[])
{
	char *str[]={"COLUMNS","DATEMSK","HOME","LANG","LC_ALL","LC_COLLATE",
                    "TZ","TMPDIR","TERM","SHELL","PWD","PATH","NLSPATH",
                    "LOGNAME","LINES",NULL};

        int i;
        char *value;

        for(i=0;str[i]!=NULL;i++){
           value=getenv(str[i]);
           if(value!=NULL)
             printf("%s\n",value);   
        }
           

}

