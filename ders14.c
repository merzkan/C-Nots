#include <stdio.h>
#include <stdlib.h>

/* 	*******************************************************************
	while(þartý)
	{
	iþlemler
	}
	while = þartlý iþlemler
	* Ýçerideki koþul saðlandýðý sürece döngü dönmektedir. *
	*******************************************************************
	int i;
	i=1;
	while(i<=5){
		printf("omer ozkan ozdil");
		i++;//bunu eklemezsek sonsuza kadar yazdýrýr.//
	}
	*******************************************************************
	//20ye kadar olan çift sayýlarý listele ama 14 olmasýn.//
	int i;
	i=1;
	while(i<=20)
	{
		if(i%2==0 && i!=14)
		{
			printf("%d\n",i);
		}
		i++;
	}
	*******************************************************************
	//girilen sayýnýn faktoryelini while ile bulun.//
	int sayi,fakt;
	fakt=1;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	while(sayi>1)
	{
		fakt=fakt*sayi;
		sayi--;
		
	}
	printf("%d",fakt);
	*******************************************************************
*/ 

int main() {
int i;
	i=1;
	while(i<=5){
		printf("omer ozkan ozdil");
		printf("\n");
		i+=2;//bunu eklemezsek sonsuza kadar yazdýrýr.//
	}
	return 0;
}
