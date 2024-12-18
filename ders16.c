#include <stdio.h>
#include <stdlib.h>

/*  */
	

int main() 
{
	printf("***************************************\n\niki tane girilen sayiya belirli islemler yaptirma programi!!!\n\n***************************************\n\n");
	float number1,number2,a;
	char islem;
	printf("1.sayiyi giriniz:");
	scanf("%f",&number1);
	printf("2.sayiyi giriniz:");
	scanf("%f",&number2);
	printf("\n***************************************\nhangi islemi yapmak istersiniz:\n(+)=toplama islemi\n(-)=cikarma islemi\n(*)=carpma islemi\n(/)=bolme islemi\n***************************************\n");
	printf("giriniz:");
	scanf("%s",&islem);
	switch(islem)
	{
		case '+':
		printf("Buldugunuz sonuc: %f",number1+number2);
		break;
		
		case '-':
		printf("Buldugunuz sonuc: %f",number1-number2);
		break;
		
		case '*':
		printf("Buldugunuz sonuc: %f",number1*number2);
		break;
		
		case '/':
		printf("Buldugunuz sonuc: %f",number1/number2);
		break;
		default:printf("hatali girdiniz!");
	}
	printf("\nBir tusa basiniz.");
	scanf("%f",a);
	
	return 0;
}
