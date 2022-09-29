#include<stdio.h>
#include<math.h>
int main(){
	int i;
	int t=0;
	int sum=0;
	int N;
	printf(" Enter number of elements");
	scanf("%d", &N);
	int m[N];
	for(i=0;i<N;i++){
		m[i]=-25 +rand()%50;
		printf(" %d ", m[i]);
		sum+=m[i];
	}
	int mid=sum/N;
	printf("\n avarage = %d", mid);
	for(i=0;i<N;i++){
		if(m[i]>mid){
			t++;
		}
	}
	printf("\n number of elements = %d \n", t);
	int j; 
	int abssum;
	for(i=0;i<N;i++){
		if(m[i]<0){
			printf("First negative number %d\n", m[i]);
			for(j=i+1;j<N;j++){
				abssum+=abs(m[j]);
	}
	printf("summ of elements = %d\n", abssum);
	return 0;
		}
	}
	
	
}
