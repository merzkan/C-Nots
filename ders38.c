#include <stdio.h>
#include <stdlib.h>

/* strlen fonksiyonu uzunlugu söyler. stringler için kullanýlýr.
************************************************************************
	printf("katar uzunlugu: %d\n",strlen("merhaba dunya")); //boþluguda sayar 13 çýktý//
	
	char kelime[100];
	printf("kelimeyi giriniz:");
	scanf("%s",kelime);
	printf("%d",strlen(kelime));    //%d kullandýk çünkü rakam çýktýsý vermek için.boþluktan sonrasýný saymýyor. merhaba dunya yazarsak 7 çýkar.//
	return 0;
************************************************************************
	//Strings bölümünde, bir sizeof stringin/dizinin ýsýsýnýn elde edildiði görülüyor. 
	//Sayarken karakterinin de dahil olduðu gibi sizeofve'nin strlenfarklý davranmadýðýný unutmayýn :sizeof\0
	// sizeofAyrýca bunun gerçek dize uzunluðunu deðil, her zaman bellek boyutunu (bayt cinsinden) döndüreceðini bilmeniz de önemlidir :
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", strlen(alphabet));   // 26
	printf("%d", sizeof(alphabet));   // 27   \0 bunu da sayar.   or     printf("%d", sizeof(alphabet));   // 50 bellek boyutunu (bayt cinsinden)
*/

int main() {

}
