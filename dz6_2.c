#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <cstdio>
#include <stdio.h>
int main(void) {
time_t now = time(NULL);
pid_t pid; 
printf("Only 1 process\n");
printf("function fork...\n");
int count1=0, count2=0; 
pid = fork(); 
  while(1){
   if (pid == 0) {
	printf("Childe process\n");
	count1++;
  } else if (pid > 0) {
     printf("Parent process, pid childe %d\n", pid);
     count2++;
  } else {
     printf("Error\n"); 
  }
   time_t stop = time(NULL);
   if((stop-now) == 2) break;
  }
  sleep(2);
  printf("---------------------------------------------------------------------------\n");
  if(count2!=0){ printf("Number of parent process: %d\n",count2);}
  if(count1!=0){ printf("Number of childe process: %d\n",count1); }
return 0;
}
