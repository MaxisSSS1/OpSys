#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main(){
 char **envi;
 envi = environ;
 while(*envi !=NULL){
  printf("%s\n",*envi);
  *envi++;
 }
 printf("\n");
return 0;
}
