#include<stdio.h>
#include <math.h>
int main(void){
	float x;
	printf("Enter x = ");
	scanf("%f", &x);
	double F=exp(-abs(x))*sin(x);
	printf("F(x)= %f ", F);
	return 0;
	
}
