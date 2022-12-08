#include <stdio.h>
#include <unistd.h>

 void processData(){
    printf("getpid:  %d\n",getpid());
    printf("getppid: %d\n",getppid());
    printf("getpgrp: %d\n",getpgrp());
    printf("getuid:  %d\n",getuid());
    printf("geteuid: %d\n",geteuid());
    printf("getgid:  %d\n",getgid());
    printf("getegid: %d\n",getegid());
 }

int main(){
 processData();
return 0;
}
