#include <stdio.h>
#include <stdlib.h>

/* 
******************************************
strcat(a,b) b'nin içindekini a'ya atýyor.  birleþtirme
******************************************
	char kitapad[30],yazar[30],kitapyazar[60];
	printf("kitap adi ve yazari girin:");
	scanf("%s%s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,yazar);
	printf("\n\n");
	printf("%s",kitapyazar);
	
************************************************************************************
	//strcmp(a,b)  Ýki dizeyi karþýlaþtýrmak için iþlevi kullanabilirsiniz  .
	//Ýki dize eþitse 0, aksi halde 0 olmayan bir deðer döndürür:
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

	// Compare str1 and str2, and print the result
	printf("%d\n", strcmp(str1, str2));    // Returns 0 (the strings are equal)
  
	// Compare str1 and str3, and print the result
	printf("%d\n", strcmp(str1, str3));   // Returns -4 (the strings are not equal)
************************************************************************************
*/

int main() {

	
	return 0;
}
