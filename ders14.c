#include <stdio.h>
#include <stdlib.h>

/* 	*******************************************************************
	while(�art�)
	{
	i�lemler
	}
	while = �artl� i�lemler
	* ��erideki ko�ul sa�land��� s�rece d�ng� d�nmektedir. *
	*******************************************************************
	int i;
	i=1;
	while(i<=5){
		printf("omer ozkan ozdil");
		i++;//bunu eklemezsek sonsuza kadar yazd�r�r.//
	}
	*******************************************************************
	//20ye kadar olan �ift say�lar� listele ama 14 olmas�n.//
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
	//girilen say�n�n faktoryelini while ile bulun.//
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
		i+=2;//bunu eklemezsek sonsuza kadar yazd�r�r.//
	}
	return 0;
}
