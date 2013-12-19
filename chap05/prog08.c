#include "apue.h"

struct Item{
      short count;
      long  total;
      char  *name;
};    



int main(){
	
    struct Item item;
    FILE *fp=NULL;
    float data[10]={0.5,1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5};

    item.count=10;
    item.total=56000;
    item.name="Karthik";

    fp=fopen("/home/karthik/StevensProgs/chap05/file6","w+");
    if(fp==NULL) 
       err_quit("error opening file6 using fopen");

    if(fwrite(&data[2],sizeof(float),4,fp)!=4)
          err_sys("fwrite error");

    if(fwrite(&item,sizeof(item),1,fp)!=1)
          err_sys("fwrite error");    
     



    exit(0);



}

