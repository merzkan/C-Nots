#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
int main() {
	int a=1,i,number,player,bot,islem,number1;
	srand(time(NULL));
	player = (rand() % 10 +1)+(rand() % 10 +1);		
	bot = (rand() % 10 +1)+(rand() % 10 +1);
	printf("***********\nKartlarin toplami:%d\n",player);
while(a==1){
	printf("***********\n1-kart cek\n2-Dur\n0-Exit\n***********\n");
	scanf("%d",&islem);
	switch(islem) {
		case 1:
			number=(rand() % 10 +1);
			printf("%d cektiniz.\n",number);
			player+=number;
			if(player>21){
				printf("Kartlarin toplami:%d\n",player);
				printf("***********\nkaybettiniz.\n");
				a=0;
				break;
			}	
				printf("Kartlarin toplami:%d\n",player);
			break;
		
		case 2:
		while(bot<=16){
		
			if(bot<=16){
				number1 = (rand() % 10 +1);
				bot+=number1;
			}
		}
			printf("Kartlariniz toplami:%d\nKarsi tarafin kartlarinin toplami:%d\n",player,bot);
			if(bot>player && bot <=21){
				printf("***********\nkaybettiniz.\n");
			}
			else if(bot==player){
				printf("***********\nberabere kaldiniz.\n");
			}
			else{
				printf("***********\nkazandiniz.\n");
			}
			a=0;
			break;
		case 0:
			printf("cikis yapiliyor.");
			exit(0);
			break;			
		default:
			printf("hatali tuslama yaptiniz.\n");
			printf("Kartlarin toplami:%d\n",player);
			break;
}
	
}
	getche();
	system("cls");
	return main();
	return 0;
}
