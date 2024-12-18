#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi1,sayi2,sonuc,cik,top,bol,carp;
	char islem;
	printf("sayi1 giriniz:");
	scanf("%d",&sayi1);
	printf("sayi2 giriniz:");
	scanf("%d",&sayi2);
	printf("islemi girin:");
	scanf("%s",&islem);
	
	
	top=sayi1+sayi2;
	bol=sayi1/sayi2;
	carp=sayi1*sayi2;
	switch(islem)
	{
		case '-':
			cik=sayi1-sayi2;
			printf("islemin sonucu: %d",cik);break;
		case '+':
			printf("islemin sonucu: %d",top);break;
		case '/':
			printf("islemin sonucu: %d",bol);break;
		case '*':
			printf("islemin sonucu: %d",carp);break;	
		
	}
	return 0;
}
