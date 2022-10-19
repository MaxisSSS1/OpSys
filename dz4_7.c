#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main(){
 char *name[10];
 printf("Enter Name");
 scanf("%s", name);
 int *NAME=unsetenv(name);
 printf("%s was deleted", name);
 printf("\n");
return 0;
}
