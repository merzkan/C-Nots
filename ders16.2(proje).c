#include <stdio.h>
#include <stdlib.h>

/*  */

int main() {
	int sayi1=12,sayi2=16,sonuc,secim,alan,x,cevre;
	int sayi[20];
	int i,eleman,toplam=0,ortalama;
	printf("**************************************\nmatematik menusu\n");
	printf("**************************************\n");
	printf("1-Kare de alan ve cevre hesabi\n");
	printf("2-girilen sayinin kupu\n");
	printf("3-cemberde alan ve cevre hesabi\n");
	printf("4-dikdortgenin alan ve cevre hesabi\n");
	printf("5-girilen sayilarin toplamini yazdirma\n**************************************\n");
	printf("isleminizi seciniz:");
	scanf("%d",&secim);
	switch(secim)
	{	
		case 1:
			printf("karenin bir kenarini giriniz:");
			scanf("%d",&sayi1);
			alan=sayi1*sayi1;
			cevre=sayi1*4;
			printf("karenin alani:%d\nkarenin cevresi:%d",alan,cevre);
			break;
		case 2:
			printf("bir sayi giriniz:");
			scanf("%d",&sayi1);
			printf("girilen sayinin kupu: %d",sayi1*sayi1*sayi1);
			break;
		case 3:
			printf("yaricapi giriniz:");
			scanf("%d",&sayi1);
			printf("pi'yi giriniz:");
			scanf("%d",&sayi2);
			cevre=2*sayi1*sayi2;
			alan=sayi2*sayi1*sayi1;
			printf("cemberin alani:%d\ncemberin cevresi:%d",alan,cevre);
			break;
		case 4:
			printf("dikdortgenin bir kenarini giriniz:");
			scanf("%d",&sayi1);
			printf("dikdortgenin diger kenarini giriniz:");
			scanf("%d",&sayi2);
			alan=sayi1*sayi2;
			cevre=2*(sayi1+sayi2);
			printf("dikdortgenin alani:%d\ndikdortgenin cevresi:%d",alan,cevre);
			break;
		case 5:

			printf("eleman sayisini giriniz:");
			scanf("%d",&eleman);
			for(i=0;i<eleman;i++)
			{
				printf("%d.sayiyi giriniz:",i+1);
				scanf("%d",&sayi[i]);
				toplam=toplam+sayi[i];
			}
			printf("girdiginiz sayilar:\n");
			for(i=0;i<eleman;i++)
			{		
				printf("%d\n",sayi[i]);
			}
			printf("\ngirdiginiz sayilarin toplami: %d",toplam);
			break;
		default:
			printf("\nhatali tuslama yaptiniz.");

	}
	printf("\nbitti!!!");
	scanf("%d",&x);
	return 0;
}
