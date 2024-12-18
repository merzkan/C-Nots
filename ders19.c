#include <stdio.h>
#include <stdlib.h>

/*	**************************************************************************************
	char sehir[15];
	int i;
	for(i=1;i<4;i++)
	{
		printf("sehir giriniz:");
		scanf("%s",&sehir);
		printf("girdiginiz il: %s",sehir);
		printf("\n");
	}
	**************************************************************************************
	char sehir[3][30];
	int i;
	for(i=0;i<3;i++)
	{
		printf("sehir ismi giriniz:");
		scanf("%s",sehir[i]);
	}
	printf("girmis oldugunuz sehirler:\n1.%s\n2.%s\n3.%s\n",sehir[0],sehir[1],sehir[2]);
	**************************************************************************************
	int dizi[100];
	int i,sayi;
	printf("eleman sayisi: ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		printf("dizinin %d.degerini giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	for(i=0;i<sayi;i++)
	{
		printf("%d ",dizi[i]);
	}
	**************************************************************************************
	//dýþarýdan girilen sayýlarýn aritmetik ortalamasý ve toplamý//
	int sayilar[20];
	int i,eleman,ort,toplam;
	printf("eleman sayisi:");
	scanf("%d",&eleman);
	for(i=0;i<eleman;i++)
	{
		printf("%d.sayiyi giriniz:",i+1);
		scanf("%d",&sayilar[i]);
		toplam=toplam+sayilar[i];
	}
	ort=toplam/eleman;
	printf("%d,%d",ort,toplam-1);
*/

int main() {
		//dýþarýdan girilen sayýlarýn aritmetik ortalamasý ve toplamý//
	int sayilar[20];
	int i,eleman,ort,toplam=0;
	printf("eleman sayisi:");
	scanf("%d",&eleman);
	for(i=0;i<eleman;i++)
	{
		printf("\n%d.sayiyi giriniz:",i+1);
		scanf("%d",&sayilar[i]);
		toplam=toplam+sayilar[i];
		printf("%d",toplam);
	}
	ort=toplam/eleman;
	printf("\n%d,%d",ort,toplam);
	return 0;
}
