#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
int main() {
	int bot,player,money=1000,iddia,a=1,sec,player1,bot1;
	while(a==1){
	srand(time(NULL));
	player= (rand() % 10 +1)+(rand() % 10 +1);	
	bot= (rand() % 10 +1)+(rand() % 10 +1);
	while(bot<=16){
		bot1=rand() % 10 +1;
		bot+=bot1;
	}
	printf("Paraniz:%d\n",money);
	if(money<=0){
	printf("paraniz bitti.\noyunbitti.\n");
	break;
	}
	printf("Ne kadar yatirmak istiyorsunuz:");
	scanf("%d",&iddia);
	int b=1;
		if(money>=iddia && iddia>0){
			while(b==1){		
				printf("Kartlarinizin toplami:%d\n",player);
				printf("**************\n 1-kart cek\n 2-dur\n 0-exit\n**************\n");
				scanf("%d",&sec);
			switch(sec) {
				case 1:
					player1=(rand() % 10 +1);
					player+=player1;
					printf("%d cektiniz.\n",player1);
					if(player>21){
						printf("Kartlarinizin toplami:%d\n",player);
						printf("kaybettiniz.\n");
						money-=iddia;
						b=0;							
					}
					break;
				case 2:
					printf("kartlarinizin toplami:%d\n",player);
					printf("karsi tarafin toplami:%d\n",bot);
					if(bot>player && bot <=21){
					
						printf("kaybettiniz.\n");
						money-=iddia;	;
						b=0;
					}
					else if(bot==player){
						printf("berabere.\n");	
						b=0;		
					}
					else{
						printf("tebrikler kazandiniz.\n");
						money+=iddia;	
						b=0;
					}
					break;
				case 0:
					printf("cikis yapiliyor.");
					a=0;
					b=0;
					break;
				default:
					printf("hatali tuslama yaptiniz.\ntekrar tuslama yapiniz.\n");
					break;
				}
			}
		}
		else if(iddia<=0 ){
			printf("pozitif bir deger giriniz.\n");
		}
		else{
			printf("iddianiz paranizdan buyuk olamaz lutfen tekrar giriniz!\n");
		}
	}
return 0;

}
