#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*  */

int main() {
	
	int durum=1;
	int islem,bakiye=1000,tutar;
		
	while(durum==1)
	{
	
printf("islemler\n*******************\nparacekme(1)\npara havale(2)\npara yatirma(3)\nbakiye sorgulama(4)\nkart iade(5)\nexit(6)\n*******************\n\n");
	printf("islemi seciniz:");
	scanf("%d",&islem);
	switch(islem)
	{
		case 1:
			printf("bakiyeniz:%dTL\n",bakiye);	
			printf("cekilecek tutar:");
			scanf("%d",&tutar);
			if(bakiye<tutar)
			{
				printf("bakiye yetersiz\n");
				break;
			}
			bakiye-=tutar;
			printf("bakiyeniz: %d ",bakiye);
			break;
		case 2:
			printf("bakiyeniz:%dTL\n",bakiye);	
			printf("havale edilecek tutar:");
			scanf("%d",&tutar);
			if(bakiye<tutar)
			{
				printf("bakiye yetersiz\n");
				break;
			}
			bakiye-=tutar;
			printf("bakiyeniz: %d ",bakiye);
			break;
		case 3:
			printf("bakiyeniz:%dTL\n",bakiye);	
			printf("yatiralacak tutar:");
			scanf("%d",&tutar);
			bakiye+=tutar;
			printf("bakiyeniz: %d ",bakiye);
			break;
		case 4:
			printf("bakiyeniz:%dTL\n",bakiye);	
			break;
		case 5:
			printf("kart iade edildi.");	
			break;
		case 6:
			durum=0;
			break;
		default: printf("hatalý tuþlama yaptýnýz.");
		
		
	}
	

	}

	return 0;
}
