#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int a, b,c;
	char d;
	int bet;
	int score=5000;
	printf("Set your bet ");
	scanf("%d", &bet);
	while(score>bet||a==7&&b==7&&c==7){
		printf("Spin - Space\nPaytable - C\nChange Bet - B\n" );
	d = _getche();
	if(d=='b'){
		printf("Set your Bet ");
	scanf("%d", &bet);
	}
	if(d=='c'){
		printf("000 - 25x Bet\n");
		printf("111 - 25x Bet\n");
		printf("222 - 25x Bet\n");
		printf("333 - 25x Bet\n");
		printf("444 - 25x Bet\n");
		printf("5XX - 1x Bet\n");
		printf("55X - 10x Bet\n");
		printf("555 - 50x Bet\n");
		printf("7XX - 2x Bet\n");
		printf("77X - 20x Bet\n");
		printf("777 - Jacpot 500x Bet\n");
		printf("666 - Penalty -10x Bet\n");
	}
	if (d == ' ') {
	score=score-bet;
	a=rand()%7;
	b=rand()%7;
	c=rand()%7;
	int win=0;
	printf("|%d|%d|%d|\n", a,b,c);
	if(a==0&&b==0&&c==0||a==1&&b==1&&c==1||a==2&&b==2&&c==2||a==3&&b==3&&c==3||a==4&&b==4&&c==4){
		win=win+bet*10;
	}
	if(a==5){
		win=win+bet;	
	}
	if(a==5&&b==5){
		win=win+bet*9;	
	}
	if(a==5&&b==5&&c==5){
		win=win+bet*40;	
	}
	if(a==7){
		win=win+bet*2;	
	}
	if(a==7&&b==7){
		win=win+bet*18;	
	}
	if(a==7&&b==7&&c==7){
		win=win+bet*480;
		printf("Congratulations you hit the Jacpot!\n");
		printf(" Your score: %d credits\n", score);
		return 0;	
	}
	if(a==6&&b==6&&c==6){
		printf("Unlucky you hit 666 and lost %d credits", 10*bet);
		score=score-10*bet;
	}
	if(win>0){
		printf("You win %d credits!!!\n", win);
	}
	score=score+win;
	printf(" Your score: %d credits\n", score);
	}
	}
	printf("You out of money:(");
	return 0;
}
