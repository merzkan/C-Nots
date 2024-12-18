#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
int main() {
	int num,guess,a=1,sec;
	printf("sayi tahmin etme oyununa hosgeldiniz.\n");
	printf("Birden 100e kadar tahmin et.\n");
	srand(time(NULL));
while(a==1){
	num= rand() % 100 + 1;
	int b=1;
while(b==1){
	printf("\ntahmini giriniz:");
	scanf("%d",&guess);
	if(guess>num){
		printf("*****************\nsayiyi azaltiniz.\n*****************");
	}
	else if(num>guess){
		printf("*****************\nsayiyi arttiriniz.\n*****************");
	}
	else if(num==guess){
		printf("*****************\ntebrikler bildiniz.\n*****************\n");
		printf("yeni oyuna baslamak istiyorsaniz 1e basiniz.cikis yapmak istiyorsaniz 0 a basiniz.\n");
		scanf("%d",&sec);
		if(sec==1){
		printf("Yeni oyun basliyor.");
		b=0;
		}
		else if(sec==0){
			printf("cikis yapiliyor!");
			a=0;
			b=0;
		}
	}
}
}
return 0;
}
