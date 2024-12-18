#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

void win(){
	printf("*************\ntebrikler kazandiniz.\n");
}
void lost(){
	printf("*************\nkaybettiniz.\n");
}
void draw(){
	printf("*************\nberabere kaldiniz.\n");
}


int main() {
	srand(time(NULL));
	int tas,kagit,makas,sec,bot;
	printf("Tas-kagit-makas oyununa hosgeldin.\n");
while(1){
	printf("*************\n1-tas\n2-kagit\n3-makas\n0-oyundan cik\n*************\n");
	bot= rand()%3+1;
	
	scanf("%d",&sec);
	if(sec==1){
		if(bot==1){
			printf("tas sectiniz.\nkarsi taraf tas secti\n");
			draw();
		}
		else if(bot==2){
			printf("%tas sectiniz.\nkarsi taraf kagit secti\n");
			lost();
		}
		else if(bot==3){
			printf("%tas sectiniz.\nkarsi taraf makas secti\n");
			win();
		}
	}
	if(sec==2){
		if(bot==1){
			printf("kagit sectiniz.\nkarsi taraf tas secti\n");
			win();
		}
		else if(bot==2){
			printf("%kagit sectiniz.\nkarsi taraf kagit secti\n");
			draw();
		}
		else if(bot==3){
			printf("%kagit sectiniz.\nkarsi taraf makas secti\n");
			lost();
		}
	}
	if(sec==3){
		if(bot==1){
			printf("makas sectiniz.\nkarsi taraf tas secti\n");
			lost();
		}
		else if(bot==2){
			printf("%makas sectiniz.\nkarsi taraf kagit secti\n");
			win();
		}
		else if(bot==3){
			printf("%makas sectiniz.\nkarsi taraf makas secti\n");
			draw();
		}
	}
	if(sec==0){
		printf("oyundan cikis yapiliyor");
	return 0;	
	}

}
	
return 0;
}
