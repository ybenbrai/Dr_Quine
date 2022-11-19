#include <stdio.h>

// print function
void print(char *s)
{
     printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10);
}

int main()
{
	// the String to print
	char *s = "#include <stdio.h>%c%c// print function%cvoid print(char *s)%c{%c     printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 10, 10, 10);%c}%cint main()%c{%c     // the String to print%c     char *s = %c%s%c;%c     print(s);%c     return (0);%c}";
	print(s);
	return (0);
}