#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct info{
	char sname[50];
	int number;
	int grade[3];

};
struct info* element;
int num = 0;
void zadanie_1();
int main()
{
 num :  while(1)
  {
      printf("1 - Add student\n");
      printf("2 - Requests\n");
      printf("3 - Delete student\n");
      printf("4 - Print group\n");
      printf("5 - Exit\n");
    int menubar;
    scanf("%d", &menubar);
    printf("\n");
    switch(menubar) 
    {
      case 1 : zadanie_1();break; 

      case 2 : zadanie_2();break;

      case 3 : zadanie_3();break;

      case 4 : zadanie_4();break;

            case 5:return 0;


      default: printf("No such variant try again\n\n");
    }
  }    
    return 0;
}
void zadanie_1()
{
	int i,j,temp;
      if (!element)
      {
        element = (struct info*) malloc((1)*sizeof(struct info));
        printf("Enter student`s surname : ");
        scanf("%s", &element[num].sname);
        printf("Enter group : ");
        scanf("%d", &element[num].number);
        printf("Enter Web-technologi mark : ");
        scanf("%d", &element[num].grade[0]);
        printf("Enter Ukrainian language mark : ");
        scanf("%d", &element[num].grade[1]);
        printf("Enter Information system design mark : ");
        scanf("%d", &element[num].grade[2]);
        num++;
      }
      else 
      {
        element = (struct info*) realloc(element, (num + 1) * sizeof(struct info));
        printf("Enter student`s surname : ");
        scanf("%s", &element[num].sname);
        printf("Enter group : ");
        scanf("%d", &element[num].number);
        printf("Enter Web-technologi mark : ");
        scanf("%d", &element[num].grade[0]);
        printf("Enter Ukrainian language mark : ");
        scanf("%d", &element[num].grade[1]);
        printf("Enter Information system design mark : ");
        scanf("%d", &element[num].grade[2]);
        num++;  
      }
    

    }
void zadanie_2(){
      printf("1 - Students with debt\n");
      printf("2 - Percentage of students passing all exams with good and excellent\n");
      printf("3 - The name of the item that was given the best\n");
      printf("4 - Worst performing group number\n");
    int menu;
    scanf("%d", &menu);
    printf("\n");
    switch(menu) 
    {
      case 1 : pf(); break; 

      case 2 : pd(); break;
      
      case 3 : pp(); break;
      
      case 4 : pg(); break;
  
      default: printf("No such variant try again\n\n");
    }   
}
void pf(){
	int i;
        printf("     Surname\t  Group number  Web technologies  Ukrainian language  Information systems design\n");
    for(i=0;i<num;i++){
    if(element[i].grade[0]<3||element[i].grade[01]<3||element[i].grade[2]<3){
    printf("%13s\t %13d  %15d %15d %30d\n", element[i].sname, element[i].number, element[i].grade[0], element[i].grade[1], element[i].grade[2]);	
	}
}}
void pd(){
int i;
double d;
int k=0;
	for(i=0;i<num;i++){
		if(element[i].grade[0]>3&&element[i].grade[1]>3&&element[i].grade[2]>3){
		k++;}
	}
	d=((double)k/(double)num)*100;
	printf("Percentage of students passing all exams with good and excellent: %.2f\n", d);
}
void pp(){
int i;
int sum1=0;
int sum2=0;
int sum3=0;
	for(i=0;i<num;i++){
		sum1+=element[i].grade[0];
		sum2+=element[i].grade[1];
		sum3+=element[i].grade[2];
	}
	if(sum1>=sum2&&sum1>sum3||sum1>sum2&&sum1>=sum3){
		printf("Web technologies far away\n");
	}
	else if(sum2>=sum1&&sum2>sum3||sum2>sum1&&sum1>=sum3){
		printf("Ukrainian language is the best\n");
	}
	else{
			printf("The design of information systems is far from the best\n");
	}
}
void pg(){
int i;
int summ1=0;
int summ2=0;
int summ3=0;
int summ4=0;
int k1=0;
int k2=0;
int k3=0;
int k4=0;
	for(i=0;i<num;i++){
		if(element[i].number==1){
			summ1=element[i].grade[0]+element[i].grade[1]+element[i].grade[2];
			k1++;
		}
		if(element[i].number==2){
			summ2=element[i].grade[0]+element[i].grade[1]+element[i].grade[2];
			k2++;
		}
		if(element[i].number==3){
			summ3=element[i].grade[0]+element[i].grade[1]+element[i].grade[2];
			k3++;
		}
		if(element[i].number==4){
			summ4=element[i].grade[0]+element[i].grade[1]+element[i].grade[2];
			k4++;
		}
	}
	double sum1=((double)summ1/(double)k1)*100;
	double sum2=((double)summ2/(double)k2)*100;
	double sum3=((double)summ3/(double)k3)*100;
	double sum4=((double)summ4/(double)k4)*100;
	if(sum1<sum2&&sum1<sum3&&sum1<sum4){
		printf("1st group is the worst of all\n");
	}
	else if(sum2<sum1&&sum2<sum3&&sum2<sum4){
		printf("2nd group is the worst of all\n");
	}
	else if(sum3<sum1&&sum3<sum2&&sum3<sum4){
			printf("3rd group is the worst of all\n");
	}
	else if(sum4<sum1&&sum4<sum2&&sum4<sum3){
		printf("4th group is the worst of all\n");
	}
}
void zadanie_3(){
	int i;
	char a[30];
	printf("Enter the student's surname ");
	scanf("%s", &a);
	for(i=0;i<num;i++){
		if(strcmp(strcmp(element[i].sname,a)==0)){
		break;}
	}
	if(i==num){
	printf("There are no such students\n");
	return 0;}
	for(i=i++;i<num;i++){
		strcpy(element[i].sname,element[i+1].sname);
		element[i].grade[0]=element[i+1].grade[0];
		element[i].grade[1]=element[i+1].grade[1];
		element[i].grade[2]=element[i+1].grade[2];
		element[i].number=element[i+1].number;
	}
	num--;
}
void zadanie_4(){
		int i;
    printf("     Surname\t  Group number  Web technologies  Ukrainian language  Information systems design\n");
    for(i=0;i<num;i++){
    printf("%13s\t %13d  %15d %15d %30d\n", element[i].sname, element[i].number, element[i].grade[0], element[i].grade[1], element[i].grade[2]);	
	}
}

