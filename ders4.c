#include <stdio.h>
#include <stdlib.h>

/*  
	ÝNT DEÐÝÞKENLER integer=tam sayý
	%d tam sayýlarda kullanýlýr.
	deðiþkentürü deðiþken adý;
	******************************************************************************************
	int sayi;
	sayi=6;
	printf("Girdiginiz sayi: %d",sayi);
	******************************************************************************************
	int sayi1,sayi2,toplam;
	sayi1=40;
	sayi2=80;
	toplam=sayi1+sayi2;
	printf("toplam sonuc: %d",toplam);
    *******************************************************************************************
    int sayi1,sayi2,topla,carp,fark,bol;
	sayi1=70;
	sayi2=10;
	topla=sayi1+sayi2;
	carp=sayi1*sayi2;
	fark=sayi1-sayi2;
	bol=sayi1/sayi2;
	printf("toplami:%d\ncarpimi:%d\nfarki:%d\nbolumu:%d",topla,carp,fark,bol);
    *******************************************************************************************
	int s1,s2,islem;
	s1=10;
	s2=6;
	islem=s1/s2;
	printf("islemin sonucu: %d",islem);
	//int oldugu için sadece tam sayýyý yazdýrdý yani 1'i//
	*******************************************************************************************
	int s1,cevre,alan;
	s1=5;
	cevre=s1*4;
	alan=s1*s1;
	printf("cevresi:%d\nalani:%d",cevre,alan);
	*******************************************************************************************
	int k,b,alan,cevre;
	k=10;	
	b=5;
	alan=k*b;
	cevre=2*(k+b	);
	printf("alani:%d\ncevresi:%d",alan,cevre);
	*******************************************************************************************
	int kenar1,kenar2,alan,cevre;
	printf("1. kenarini giriniz:");
	scanf("%d",&kenar1);
	printf("2. kenarini giriniz:");
	scanf("%d",&kenar2);
	printf("dikdortgenin alani:%d\ndikdortgenin cevresi:%d",kenar1*kenar2,2*(kenar1+kenar2));
	*****************************************
	int kenar1,kenar2,alan,cevre;
	printf("1. kenarini giriniz:");
	scanf("%d",&kenar1);
	printf("2. kenarini giriniz:");
	scanf("%d",&kenar2);
	alan=kenar1*kenar2;
	cevre=2*(kenar1+kenar2);
	printf("dikdortgenin alani:%d\ndikdortgenin cevresi:%d",alan,cevre);
*/

int main() {
	int bagaj,el,fazla,odeme;
	printf("bagajda kac kilo var:");
	scanf("%d",&bagaj);
	printf("yaninizda kac kilo var:");
	scanf("%d",&el);
	fazla=(el+bagaj)-15;
	odeme=fazla*5;
	printf("fazla tasima miktariniz:%d\nodeme miktariniz:%d",fazla,odeme);
	
	
	
	return 0;
}

	
