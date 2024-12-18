#include <stdio.h>
#include <stdlib.h>

/* 	
	******************string**********************  #include <string.h>
	//Hello World! yazdýrýr  //  %s  string
	char greetings[] = "Hello World!";
	printf("%s", greetings);
	***********************************************************************
	//H yazdýrýr//  %c  tek karakter
	char greetings[] = "Hello World!";
	printf("%c", greetings[0]);
	***********************************************************************
	//Neden sonuna \0 karakterini ekliyoruz? 
	Bu, "boþ sonlandýrýcý karakter" olarak bilinir ve bu yöntemi kullanarak dizeler oluþturulurken dahil edilmesi gerekir.
	C'ye bunun dizenin sonu olduðunu söyler.//
	char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	printf("%s", greetings);
	***********************************************************************	
	//Her iki dizinin boyutunun ayný olduðunu unutmayýn: 
	Her ikisinde de 13 karakter bulunur (bu arada boþluk da bir karakter olarak sayýlýr),
	\0 karakteri de dahil://
	char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	char greetings2[] = "Hello World!";
	printf("%lu\n", sizeof(greetings));   // Outputs 13
	printf("%lu\n", sizeof(greetings2));  // Outputs 13	
	
	***********************************************************************
	***********************************************************************
	//10,20,30,40,50,60,70 bunlarý alt alta yazdýrýr//
	int sayilar[]={10,20,30,40,50,60,70};
	int i;
	for(i=0;i<7;i+=1)
	{
		printf("%d\n",sayilar[i]);
	}
	***********************************************************************
	//0 1 2 3 4 5 6  yazdýrýr//
		int sayilar[]={10,20,30,40,50,60,70};
	int i;
	for(i=0;i<7;i+=1)
	{
		printf("%d\n",i);//çünkü buraya i girdik//
	}
	***********************************************************************
		//toplamýný veriyor 80i verdi.//
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
