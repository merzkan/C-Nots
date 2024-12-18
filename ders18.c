#include <stdio.h>
#include <stdlib.h>

/* 	
	******************string**********************  #include <string.h>
	//Hello World! yazd�r�r  //  %s  string
	char greetings[] = "Hello World!";
	printf("%s", greetings);
	***********************************************************************
	//H yazd�r�r//  %c  tek karakter
	char greetings[] = "Hello World!";
	printf("%c", greetings[0]);
	***********************************************************************
	//Neden sonuna \0 karakterini ekliyoruz? 
	Bu, "bo� sonland�r�c� karakter" olarak bilinir ve bu y�ntemi kullanarak dizeler olu�turulurken dahil edilmesi gerekir.
	C'ye bunun dizenin sonu oldu�unu s�yler.//
	char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	printf("%s", greetings);
	***********************************************************************	
	//Her iki dizinin boyutunun ayn� oldu�unu unutmay�n: 
	Her ikisinde de 13 karakter bulunur (bu arada bo�luk da bir karakter olarak say�l�r),
	\0 karakteri de dahil://
	char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	char greetings2[] = "Hello World!";
	printf("%lu\n", sizeof(greetings));   // Outputs 13
	printf("%lu\n", sizeof(greetings2));  // Outputs 13	
	
	***********************************************************************
	***********************************************************************
	//10,20,30,40,50,60,70 bunlar� alt alta yazd�r�r//
	int sayilar[]={10,20,30,40,50,60,70};
	int i;
	for(i=0;i<7;i+=1)
	{
		printf("%d\n",sayilar[i]);
	}
	***********************************************************************
	//0 1 2 3 4 5 6  yazd�r�r//
		int sayilar[]={10,20,30,40,50,60,70};
	int i;
	for(i=0;i<7;i+=1)
	{
		printf("%d\n",i);//��nk� buraya i girdik//
	}
	***********************************************************************
		//toplam�n� veriyor 80i verdi.//
	int sayilar[]={10,15,20,35};
	int toplam=0;
	int i;
	for(i=0;i<4;i++)
	{
		toplam=toplam+sayilar[i];
	}
		printf("%d",toplam);	
	***********************************************************************
	//sonuc 5040//
	int sayilar[]={1,2,3,4,5,6,7};
	int toplam=1;
	int i;
	for(i=1;i<8;i++)
	{
		toplam=toplam*i;
	}
		printf("%d",toplam);
	***********************************************************************
*/

int main() {
	int sayilar[]={1,2,3,4,5,6,7};
	int toplam=1;
	int i;
	for(i=1;i<8;i++)
	{
		toplam=toplam*i;
	}
		printf("%d",toplam);
	return 0;
}
