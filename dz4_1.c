#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char argv[]){
int a= atoi(argv[1]);
printf("a=%d   ", a);
int b= atoi(argv[2]);
printf("\nb=%d\t", b);
int c= atoi(argv[3]);
printf("\nc=%d\t", c);
int d=bb-4ac;
if(d<0){
printf("\nDiscriminant is negative\t");
return 0;}
if(d==0){
printf("\nDiscriminant is 0\t");
float x= (-b)/2a;
printf( "\nX=%f\t", x );
return 0;
} 
float q=sqrt(d);
float x1= (-b+q)/2a;
printf( "\nX1=%f\t",x1);
float x2= (-b-q)/2*a;
printf("\nx2=%f\n", x2);
return 0;
}
