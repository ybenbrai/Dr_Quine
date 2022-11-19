#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

typedef struct s_sully{
int i;
FILE *fd;
char *s;
char path[30];
char fn[30];
char tmp[100];
} t_sully;
int main(){
t_sully sully;
sully.s ="#include <stdio.h>%c#include <unistd.h>%1$c#include <stdlib.h>%1$c#include <strings.h>%1$c%1$ctypedef struct s_sully{%1$cint i;%1$cFILE *fd;%1$cchar *s;%1$cchar path[30];%1$cchar fn[30];%1$cchar tmp[100];%1$c} t_sully;%1$cint main(){%1$ct_sully sully;%1$csully.s =%2$c%s%2$c;%1$csully.i = 5;%1$cif (sully.i < 0){return(0);}%1$cif (access(%2$cSully_%4$d.c%2$c, F_OK) != -1){--sully.i;};%1$csprintf(sully.fn, %2$cSully_%4$d%2$c, sully.i);%1$csprintf(sully.path, %2$cSully_%4$d.c%2$c, sully.i);%1$csully.fd = fopen(sully.path,%2$cw%2$c);%1$cif (sully.fd > 0){%1$cfprintf(sully.fd, sully.s, 10,34,sully.s,sully.i);%1$cfclose(sully.fd);%1$cif (sully.i > 0){%1$c";
sully.i = 5;
if (sully.i < 0){return(0);}
if (access("Sully_5.c", F_OK) != -1){--sully.i;};
sprintf(sully.fn, "Sully_5", sully.i);
sprintf(sully.path, "Sully_5.c", sully.i);
sully.fd = fopen(sully.path,"w");
if (sully.fd > 0){
fprintf(sully.fd, sully.s, 10,34,sully.s,sully.i);
fclose(sully.fd);
if (sully.i > 0){
