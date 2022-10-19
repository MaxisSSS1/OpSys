#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main(){
 char *name[10];
 printf("Enter Name");
 scanf("%s", name);
 char *NAME=getenv(name);
 printf("%s", NAME);
 printf("\n");
return 0;
}
