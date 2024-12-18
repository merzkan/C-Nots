#include <stdio.h>
#include <stdlib.h>

/*
-------dosya k�saltmalar ve kavramlar--------------
*******************************************************
input  == giri�
output == ��k��
file   == dosya   == f
put    == yazd�rma
get    == okuma,alma
open   == a�ma    == fopen=dosya a�ma
close  == kapatma
write  == yazma   == w
read   == okuma   == r
add    == ekleme  == a
EOF "dosyan�n sonunu" g�sterir.
fgets  ==  toplu okuma
fputs  ==  toplu yazma
fputc bir karakter icin ama fputs stringi temsil ettigi icin birden cok sey yazsanda olur
*******************************************************
//metin belgesi olu�turma
	FILE *dosya;
	dosya=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","w");
*******************************************************	
//metin belgesine veri yazma.
//putc('buraya ne yazarsan�z onu belgeye yazd�r�r.',dosya);
	
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
//fgets kullan�m�
	FILE *belge;
	char karakter[50];
	belge=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","r");
	fgets(karakter,20,belge);  // fgets(atayacag�n�z de�i�,max okuyacag� deger,dosya yolu)
	puts(karakter);
	fclose(belge);
*******************************************************
//fputs
	FILE *metinbelgesi;
	char veri1[20]="bilgisayar";
	char veri2[20]="m�hendisligi";
	char veri3[20]="bolumu";
	metinbelgesi=fopen("C:\\Users\\Acer\\Desktop\\Yenid.txt","w");
	fputs(veri1,metinbelgesi);
	
	fputs(veri2,metinbelgesi);
	
	fputs(veri3,metinbelgesi);
	fclose(metinbelgesi);
*******************************************************
//renk de�i�tirme
system("COLOR 2");  2rakam� rengi de�i�tiriyor
*/

int main() {
	system("COLOR 2");
	printf("merhaba");
	return 0;
}
