#include <stdio.h>
#include <stdlib.h>

/*  */

int main() {
	int x;
	float a,b,c;
	printf("bir sayi giriniz:");
	scanf("%f",&a);
	printf("bir sayi giriniz:");
	scanf("%f",&b);
	printf("bir islem seciniz:\n1.toplama\n2.cikarma\n3.bolme\n4.carpma\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("toplama isleminin sonucu:%.3f",a+b);
		break;
		
		case 2:	
		printf("cikarma isleminin sonucu:%.3f",a-b);
		break;
		
		case 3:
		c = a / b;
		printf("bolme isleminin sonucu:%.3f",c);
		break;
		
		case 4:		
		printf("carpma isleminin sonucu:%.3f",a*b);
		break;
		default: printf("hatali girdiniz!");
		break;
	}
	return 0;
}
