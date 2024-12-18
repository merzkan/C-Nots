#include <stdio.h>
#include <stdlib.h>

/*
-------dosya kýsaltmalar ve kavramlar--------------
*******************************************************
input  == giriþ
output == çýkýþ
file   == dosya   == f
put    == yazdýrma
get    == okuma,alma
open   == açma    == fopen=dosya açma
close  == kapatma
write  == yazma   == w
read   == okuma   == r
add    == ekleme  == a
EOF "dosyanýn sonunu" gösterir.
fgets  ==  toplu okuma
fputs  ==  toplu yazma
fputc bir karakter icin ama fputs stringi temsil ettigi icin birden cok sey yazsanda olur
*******************************************************
//metin belgesi oluþturma
	FILE *dosya;
	dosya=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","w");
*******************************************************	
//metin belgesine veri yazma.
//putc('buraya ne yazarsanýz onu belgeye yazdýrýr.',dosya);
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","w");
	putc('a',dosya);
	putc('\n',dosya);
	putc('b',dosya); 
	fclose();
	
*******************************************************
//metin belgesi okuma.
	
	FILE *belge;
	char karakter;
	belge=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","r");
	do
	{
	karakter=getc(belge);
	printf("%c",karakter);
	}
	while(karakter!=EOF);
	fclose(belge);
*******************************************************	
//fgets kullanýmý
	FILE *belge;
	char karakter[50];
	belge=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","r");
	fgets(karakter,20,belge);  // fgets(atayacagýnýz deðiþ,max okuyacagý deger,dosya yolu)
	puts(karakter);
	fclose(belge);
*******************************************************
//fputs
	FILE *metinbelgesi;
	char veri1[20]="bilgisayar";
	char veri2[20]="mühendisligi";
	char veri3[20]="bolumu";
	metinbelgesi=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","w");
	fputs(veri1,metinbelgesi);
	
	fputs(veri2,metinbelgesi);
	
	fputs(veri3,metinbelgesi);
	fclose(metinbelgesi);
*******************************************************
//renk deðiþtirme
system("COLOR 2");  2rakamý rengi deðiþtiriyor
*/

int main() {
	system("COLOR 2");
	printf("merhaba");
	return 0;
}
