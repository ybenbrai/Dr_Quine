#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

typedef struct s_sully{
int i;
FILE *fd;
char path[30];
char fn[30];
char tmp[100];
} t_sully;
int main(){
t_sully sully;
char *s = "#include <stdio.h>%c#include <unistd.h>%1$c#include <stdlib.h>%1$c#include <strings.h>%1$c%1$ctypedef struct s_sully{%1$cint i;%1$cFILE *fd;%1$cchar path[30];%1$cchar fn[30];%1$cchar tmp[100];%1$c} t_sully;%1$cint main(){%1$ct_sully sully;%1$cchar *s = %2$c%4$s%2$c;%1$csully.i = %3$d;%1$cif (sully.i < 0){return(0);}%1$cif (access(%2$cSully_5.c%2$c, F_OK) != -1){--sully.i;};%1$csprintf(sully.fn, %2$cSully_%%d%2$c, sully.i);%1$csprintf(sully.path, %2$cSully_%%d.c%2$c, sully.i);%1$csully.fd = fopen(sully.path, %2$cw%2$c);%1$cif (sully.fd > 0){%1$cfprintf(sully.fd, s, 10, 34, sully.i, s);%1$cfclose(sully.fd);%1$cif (sully.i > 0){%1$csprintf(sully.tmp, %2$ccc -o %%s %%s%2$c, sully.fn, sully.path);%1$csystem(sully.tmp);%1$cbzero(sully.tmp, 100);%1$csprintf(sully.tmp, %2$c./%%s%2$c, sully.fn);%1$csystem(sully.tmp);%1$c}}return(0);}";
sully.i = 4;
if (sully.i < 0){return(0);}
if (access("Sully_5.c", F_OK) != -1){--sully.i;};
sprintf(sully.fn, "Sully_%d", sully.i);
sprintf(sully.path, "Sully_%d.c", sully.i);
sully.fd = fopen(sully.path, "w");
if (sully.fd > 0){
fprintf(sully.fd, s, 10, 34, sully.i, s);
fclose(sully.fd);
if (sully.i > 0){
sprintf(sully.tmp, "cc -o %s %s", sully.fn, sully.path);
system(sully.tmp);
bzero(sully.tmp, 100);
sprintf(sully.tmp, "./%s", sully.fn);
system(sully.tmp);
}}return(0);}