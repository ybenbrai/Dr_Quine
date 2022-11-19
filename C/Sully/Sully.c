#include <stdio.h>
#include <unistd.h>
#define CODE "#include <stdio.h>%c#include <unistd.h>%c#define CODE %c%s%c%cint main(){%cint i = %d;%cwhile(%d > 0){if (access(%cSully_%d.c%c, F_OK) != -1){%cvoid* fd  = fopen(%cSully_%d.c%c, %cw%c);%c"
int main(){
int i = 5;
while (i > 0){if (access("Sully_%d.c", F_OK) != -1){
void* fd  = fopen("Sully_%d.c", "w");
            break;
        }
        else
            i--;
    }
    printf(CODE, 10, 10, 34, CODE, 34, 10, 10, i, 10, i, 34, i, 34, 10, 34, i, 34, 34, 34, 10);
    return (0);
}