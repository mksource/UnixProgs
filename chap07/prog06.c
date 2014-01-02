#include "apue.h"
#include <setjmp.h>

static void f1(int,int,int,int);
static void f2(void);

static jmp_buf jmpbuffer;
static int globval;

int main(void)
{
	int autoval;
        register int regival;
        volatile int volval;
        static   int statval;

        globval=1;
        autoval=2;
        regival=3;
        volval=4;
        statval=5;

        if(setjmp(jmpbuffer)!=0){
           printf("after longjmp:\n");
           printf("global = %d, autoval = %d, regival = %d,"
                  "volval=%d,statval=%d",globval,autoval,regival,volval,statval);
           exit(0);
       }

       globval=95;autoval=96;regival=97;volval=98;statval=99;
       f1(autoval,regival,volval,statval);
       exit(0);


}
static void f1(int i,int j,int k,int l)
{
	printf("in f1()\n");
        printf("globval=%d,autoval=%d,regival=%d"
               " volval=%d statval=%d",globval,i,j,k,l);
        f2();
}
static void f2(void)
{
	longjmp(jmpbuffer,1);
}  


