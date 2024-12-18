#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int topla(float n1,float n2){
	printf("islemin sonucu: %f",n1+n2);
	return n1+n2;
}
int cikar(float n1,float n2){
	printf("islemin sonucu: %f",n1-n2);
	return n1-n2;
}
int bol(float n1,float n2){
	printf("islemin sonucu: %f",n1/n2);
	return n1/n2;
}
int carp(float n1,float n2){
	printf("islemin sonucu: %f",n1*n2);
	return n1*n2;
}
int kok(float n1){
	float t;
	t=sqrt(n1);
	printf("islemin sonucu: %f",t);
	return t;
}
int kupu(float n1){
	float t;
	t=n1*n1*n1;
	printf("islemin sonucu: %f",t);
	return t;
}
int karesi(float n1){
	float t;
	t=n1*n1;
	printf("islemin sonucu: %f",t);
	return t;
}
int mutlak(float n1){
	float t;
	t=fabs(n1);
	printf("islemin sonucu: %f",t);
	return t;
}
int ust(float n1,float n2){
	float a;
	a=pow(n1,n2);
	printf("islemin sonucu: %f",a);
	return a;
}
int logaritma(float n1){
	float a;
	a=log10(n1);
	printf("islemin sonucu: %f",a);
	return a;
}
int main() {
	float s1,s2;
	int secim,i=1;
	printf("hesap makinesine hosgeldiniz.\n\nyapmak istediginiz islemi seciniz.");
	while(i==1){
	printf("\n*******************************************\n1.toplama\n2.cikarma\n3.bolme\n4.carpma\n5.koku\n6.kupu\n7.karesi \n8.mutlak degeri\n9.ust alma\n10.logaritmasi\ncikis(0)\n*******************************************\n");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("1.sayiyi giriniz:");
			scanf("%f",&s1);
			printf("2.sayiyi giriniz:");
			scanf("%f",&s2);
			topla(s1,s2);
			break;
		case 2:
			printf("1.sayiyi giriniz:");
			scanf("%f",&s1);
			printf("2.sayiyi giriniz:");
			scanf("%f",&s2);
			cikar(s1,s2);
			break;
		case 3:
			printf("1.sayiyi giriniz:");
			scanf("%f",&s1);
			printf("2.sayiyi giriniz:");
			scanf("%f",&s2);
			bol(s1,s2);
			break;
		case 4:
			printf("1.sayiyi giriniz:");
			scanf("%f",&s1);
			printf("2.sayiyi giriniz:");
			scanf("%f",&s2);
			carp(s1,s2);
			break;
		case 5:
			printf("sayiyi giriniz:");
			scanf("%f",&s1);
			kok(s1);
			break;
		case 6:
			printf("sayiyi giriniz:");
			scanf("%f",&s1);
			kupu(s1);
			break;
		case 7:
			printf("sayiyi giriniz:");
			scanf("%f",&s1);
			karesi(s1);
			break;
		case 8:
			printf("sayiyi giriniz:");
			scanf("%f",&s1);
			mutlak(s1);
			break;
		case 9:
			printf("tabani giriniz:");
			scanf("%f",&s1);
			printf("uss giriniz:");
			scanf("%f",&s2);
			ust(s1,s2);
			break;
		case 10:
			printf("sayiyi giriniz:");
			scanf("%f",&s1);
			logaritma(s1);
			break;	
		case 0:
			i=0;
			printf("uygulamadan cikis yapildi.");
			break;
		default:
			printf("hatali tuslama yaptiniz.");
	}
}
	
	return 0;
}
