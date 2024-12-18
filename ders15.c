#include <stdio.h>
#include <stdlib.h>

/*  *****************************************************************
	switch(deðiþken)
	{
	case1:
	case2:
	}
	*****************************************************************
	int sayi;
	printf("gun numarasi giriniz:");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:
		printf("pazartesi");
		break;
		case 2:
		printf("sali"); 
		break;
		case 3:
		printf("carsamba"); 
		break;
		case 4:
		printf("persembe"); 
		break;
		case 5:
		printf("cuma"); 
		break;
		case 6:
		printf("cumartesi"); 
		break;
		case 7:
		printf("pazar"); 
		break;
		default:
		printf("hatali girdiniz");
		break;
	}
	*****************************************************************
	char sayi;
	printf("ders bas harfini giriniz:");
	scanf("%s",&sayi);
	
	switch(sayi)
	{
		case 't':printf("Turkce");break;	
 		case 'm':printf("Matematik");break;
 		case 'f':printf("Fen Bilgisi");break;
 		case 's':printf("Sosyal Bilgiler");break;
 		default:printf("Hatali ya da buyuk harf girisi");	
	}	
	*****************************************************************
*/

int main() {
	int sayi;
	printf("gun numarasi giriniz:");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:
		printf("pazartesi");
		break;
		case 2:
		printf("sali"); 
		break;
		case 3:
		printf("carsamba"); 
		break;
		case 4:
		printf("persembe"); 
		break;
		case 5:
		printf("cuma"); 
		break;
		case 6:
		printf("cumartesi"); 
		break;
		case 7:
		printf("pazar"); 
		break;
	return 0;
}
}
