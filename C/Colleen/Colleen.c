#include <stdio.h>
/*
* outside comment
*/
void print(char *s){printf(s, 10, 34, s);}
int main(){
/*
* inside comment
*/
char *s = "#include <stdio.h>%1$c/*%1$c* outside comment%1$c*/%1$cvoid print(char *s){printf(s, 10, 34, s);}%1$cint main(){%1$c/*%1$c* inside comment%1$c*/%1$cchar *s = %2$c%s%2$c;%1$cprint(s);%1$creturn (0);}";
print(s);
return (0);}