#include <stdio.h>
#include <stdlib.h>
//%s = string /ekranda g�ster s�rala//
/*
Neden direk yazmak yerine char  kulland�k diyenler i�in 
��nk� ilerde uzun kodlar yazd���nda bir de�i�keni mesela 30 farkl� yerde kullanmak gerekebilir
hatta karma��k ve uzun bir �ey de olabilir bu de�i�ken. Bu y�zden bir kere basit bir anahtar kelime ile tan�mlay�p
kullanmak daha mant�kl�. De�i�iklik yapmak gerekti�inde de sadece yukar�da char'dan bir kere de�i�iklik yapmak yeterli olacak 
30 yeri tek tek de�i�tirmek yerine */

/*
int main() {
	
	char kitapadi[20]="gadget";
	char kitapyazar[2]="gogol"; //sadece go yazar//
	
	printf("%s\n",kitapadi);
	printf("kitapturu: %s",kitapyazar);
	
	return 0;
}
*/
int main() {

	char kitapadi[30]="hayvan ciftligi";
	char kitapyazar[20]="george orwell";
	char turu[10]="hikaye";
	char sayfa[3]="120";
	char basi[4]="2000";
	
	
	printf("kitap adi: %s\n",kitapadi);
	printf("kitap yazari: %s\n",kitapyazar);
	printf("kitap turu: %s\n",turu);
	printf("kitap sayfasi: %s\n",sayfa);
	printf("kitap baskisi: %s \n",basi);
	

	return 0;
}
