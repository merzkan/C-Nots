#include <stdio.h>
#include <stdlib.h>

/* strlen fonksiyonu uzunlugu s�yler. stringler i�in kullan�l�r.
************************************************************************
	printf("katar uzunlugu: %d\n",strlen("merhaba dunya")); //bo�luguda sayar 13 ��kt�//
	
	char kelime[100];
	printf("kelimeyi giriniz:");
	scanf("%s",kelime);
	printf("%d",strlen(kelime));    //%d kulland�k ��nk� rakam ��kt�s� vermek i�in.bo�luktan sonras�n� saym�yor. merhaba dunya yazarsak 7 ��kar.//
	return 0;
************************************************************************
	//Strings b�l�m�nde, bir sizeof stringin/dizinin �s�s�n�n elde edildi�i g�r�l�yor. 
	//Sayarken karakterinin de dahil oldu�u gibi sizeofve'nin strlenfarkl� davranmad���n� unutmay�n :sizeof\0
	// sizeofAyr�ca bunun ger�ek dize uzunlu�unu de�il, her zaman bellek boyutunu (bayt cinsinden) d�nd�rece�ini bilmeniz de �nemlidir :
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", strlen(alphabet));   // 26
	printf("%d", sizeof(alphabet));   // 27   \0 bunu da sayar.   or     printf("%d", sizeof(alphabet));   // 50 bellek boyutunu (bayt cinsinden)
*/

int main() {

}
