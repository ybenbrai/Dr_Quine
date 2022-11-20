#include <stdio.h>
// print function
void print(char *s){printf(s, 10, 34, s);}
int main(){
// the String to print
char *s = "#include <stdio.h>%1$c// print function%1$cvoid print(char *s){printf(s, 10, 34, s);}%1$cint main(){%1$c// the String to print%1$cchar *s = %2$c%s%2$c;%1$cprint(s);%1$creturn (0);}";
print(s);
return (0);}