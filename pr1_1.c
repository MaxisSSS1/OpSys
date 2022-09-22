#include<stdio.h>
#include <math.h>
int main(void){
	float x;
	printf("Enter x = ");
	scanf("%f", &x);
	double F=exp(-abs(x))*sin(x);
	double G=exp(-abs(x))*cos(x);
	printf("F(x)= %f ", F);
	printf("G(x)= %f \n", G);
	return 0;
	
}
