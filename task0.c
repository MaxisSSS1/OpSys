#include <stdio.h>
#include <locale.h>
int main(){
	int N;
	printf("Enter massive`s size ");
	scanf("%d", &N);
	int mass[N];
	int i;
	for(i=0;i<N;i++){
		mass[i]=rand()%50;
		printf(" %d ", mass[i]);
	}
	while(1)
  {
      printf("\n1 - Delete point\n");
      printf("2 - Exit\n");
    int menubar;
    scanf("%d", &menubar);
    printf("\n");
    switch(menubar) 
    {
      case 1 :{
      	int j;
	   int min=mass[0];
	  for(i=0;i<N;i++){
      	      if(min>mass[i]){
      	      	min=mass[i];
				}
	      }
	      printf(" min = %d \n", min);
	      for(i=0;i<N;i++){
	      	if(mass[i]==min){
	      		if(i==0){
	      			mass[i+1]=mass[i+1]+min;
				  }
	      		mass[i-1]=mass[i-1]+min;
	      		for(j=i;j<N-1;j++){
	      			mass[j] = mass[j+1];
				  }
			  }
		  }
		  N--;
		  if(N==0){
		  		printf("Massive is empty\n");
		  		return 0;
			  }
		  for(i=0;i<N;i++){
		printf(" %d ", mass[i]);
	}
	  break; }

            case 2:return 0;


      default: printf("No such variant try againn\n\n");
    }
  }    
	
}
