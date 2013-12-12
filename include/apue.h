#ifndef _APUE_H
#define _APUE_H

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

#define MAXLINE 4096 /*max line length*/

/*
 * Default file access permissions for new files*/
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/*
 * Default permissions for new directories.
 */
#define DIR_MODE (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)

typedef void Sigfunc(int); /*for signal handlers*/

#define min(a,b) ((a)<(b) ? (a) : (b))
#define max(a,b) ((a)>(b) ? (a) : (b))

/*Prototype for our own functions*/
void err_msg(const char *,...);
void err_dump(const char *,...)  __attribute__((noreturn));
void err_quit(const char *,...)  __attribute__((noreturn));
void err_cont(int,const char *,...);
void err_exit(int,const char *,...) __attribute__((noreturn));
void err_ret(const char *,...);
void err_sys(const char *,...) __attribute__((noreturn));
#endif  /* _APUE_H*/




