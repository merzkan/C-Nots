#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
void gir(){
	printf("tahmininizi giriniz:");
}
void win(){
	printf("tebrikler kazandiniz!\n");
}
void lose(){
	printf("kaybettiniz!\n");
}
void up(){
	printf("sayiyi arttiriniz.\n");
}
void down(){
	printf("sayiyi azaltiniz.\n");
}
int main() {
	int bot,money=1000,tahmin,sec,sec1,money1,iddia,i=0,a=0;
	printf("1-100 arasi sayi tahmin etme oyununa hosgeldiniz.\n\n");
	printf("1-iddali oyun icin 1e basiniz.\n2-normal oyun icin 2ye basiniz:");
	scanf("%d",&sec);
	srand(time(NULL));
while(1){
	a=1;
	bot= rand() % 100 + 1;
	printf("%d",bot);
	if(sec==1){
	printf("\n*******************\ntoplam paraniz %dtl\n",money);
	printf("*******************\n1-denemede bilirseniz x100\n2-denemede bilirseniz x50\n3-denemede bilirseniz x25\n4-denemede bilirseniz x10\n5-denemede bilirseniz x5\n6 denemede bilirseniz x3\n7-10 arasi deneme x2\n*******************\n");
	printf("iddiali oyunu sectiniz.\n");
	printf("ne kadar yatirmak istersiniz:");
	scanf("%dtl",&iddia);
	if(money>=iddia){
		printf("hangisini oynamak istersiniz:");
		scanf("%d",&sec1);
		switch(sec1) {
			case 1:
				printf("100x sectiniz.\n");
				printf("tek hakkiniz var.\n");
				gir();
				scanf("%d",&tahmin);
				if(tahmin==bot){
					win();
					money1=iddia*100;
					money+=money1;
					printf("tebrikler %dtl kazandiniz.",money1);
				}
				else{
					lose();
					money-=iddia;
					printf("%dtl kaybettiniz.",iddia);
					if(money<=0){
						printf("\nbattiniz!");
						return 0;
					}
				}
			break;
			
			case 2:
				printf("50x sectiniz.\n");
			for(i=2;i>0;i--){
				printf("%d hakkiniz var\n",i);
				gir();
				scanf("%d",&tahmin);
				if(tahmin==bot){
				money1=iddia*50;
				money+=money1;
				printf("tebrikler %dtl kazandiniz.",money1);
				break;	
				}
				else if(tahmin<bot && i>1){
					up();
				}			
				else if(tahmin>bot && i>1){
					down();
				}
				else{
					lose();
					printf("sayi:%d\n",bot);
					money-=iddia;
					printf("%dtl kaybettiniz.",iddia);
					if(money<=0){
						printf("\nbattiniz!");
						return 0;
					}
				}	
			}
			break;
			
			case 3:
				printf("25x sectiniz.\n");
			for(i=3;i>0;i--){
				printf("%d hakkiniz var\n",i);
				gir();
				scanf("%d",&tahmin);
				if(tahmin==bot){
				money1=iddia*25;
				money+=money1;
				printf("tebrikler %dtl kazandiniz.",money1);
				break;	
				}
				else if(tahmin<bot && i>1){
					up();
				}			
				else if(tahmin>bot && i>1){
					down();
				}
				else{
					lose();
					printf("sayi:%d\n",bot);
					money-=iddia;
					printf("%dtl kaybettiniz.",iddia);
					if(money<=0){
						printf("\nbattiniz!");
						return 0;
					}
				}	
			}
			break;
			
			case 4:
				printf("10x sectiniz.\n");
			for(i=4;i>0;i--){
				printf("%d hakkiniz var\n",i);
				gir();
				scanf("%d",&tahmin);
				if(tahmin==bot){
				money1=iddia*10;
				money+=money1;
				printf("tebrikler %dtl kazandiniz.",money1);
				break;	
				}
				else if(tahmin<bot && i>1){
					up();
				}			
				else if(tahmin>bot && i>1){
					down();
				}
				else{
					lose();
					printf("sayi:%d\n",bot);
					money-=iddia;
					printf("%dtl kaybettiniz.",iddia);
					if(money<=0){
						printf("\nbattiniz!");
						return 0;
					}
				}	
			}
			break;
			
			case 5:
				printf("5x sectiniz.\n");
			for(i=5;i>0;i--){
				printf("%d hakkiniz var\n",i);
				gir();
				scanf("%d",&tahmin);
				if(tahmin==bot){
				money1=iddia*5;
				money+=money1;
				printf("tebrikler %dtl kazandiniz.",money1);
				break;	
				}
				else if(tahmin<bot && i>1){
					up();
				}			
				else if(tahmin>bot && i>1){
					down();
				}
				else{
					lose();
					printf("sayi:%d\n",bot);
					money-=iddia;
					printf("%dtl kaybettiniz.",iddia);
					if(money<=0){
						printf("\nbattiniz!");
						return 0;
					}
				}	
			}
			break;
			
			case 6:
				printf("3x sectiniz.\n");
			for(i=6;i>0;i--){
				printf("%d hakkiniz var\n",i);
				gir();
				scanf("%d",&tahmin);
				if(tahmin==bot){
				money1=iddia*3;
				money+=money1;
				printf("tebrikler %dtl kazandiniz.",money1);
				break;	
				}
				else if(tahmin<bot && i>1){
					up();
				}			
				else if(tahmin>bot && i>1){
					down();
				}
				else{
					lose();
					printf("sayi:%d\n",bot);
					money-=iddia;
					printf("%dtl kaybettiniz.",iddia);
					if(money<=0){
						printf("\nbattiniz!");
						return 0;
					}
				}	
			}
			break;
			
			case 7:
				printf("2x sectiniz.\n");
			for(i=10;i>0;i--){
				printf("%d hakkiniz var\n",i);
				gir();
				scanf("%d",&tahmin);
				if(tahmin==bot){
				money1=iddia*2;
				money+=money1;
				printf("tebrikler %dtl kazandiniz.",money1);
				break;	
				}
				else if(tahmin<bot && i>1){
					up();
				}			
				else if(tahmin>bot && i>1){
					down();
				}
				else{
					lose();
					printf("sayi:%d\n",bot);
					money-=iddia;
					printf("%dtl kaybettiniz.",iddia);
					if(money<=0){
						printf("\nbattiniz!");
						return 0;
					}
				}	
			}
			break;
			
			default:
				printf("lutfen tekrar deger giriniz:");
		}
	}	
	}
	else if(sec==2){
		printf("normal oyunu sectiniz.\n");
	while(a=1){
		gir();
		scanf("%d",&tahmin);		
		if(tahmin>bot){
			down();
		}
		else if(bot>tahmin){
			up();
		}
		else if(bot==tahmin){
			win();
			return 0;
		}
	}
	}
	else{
		printf("lutfen tekrar seciniz.");
		
	}
}
	
	
	return 0;
}
