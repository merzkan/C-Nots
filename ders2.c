#include <stdio.h>
#include <stdlib.h>
//%s = string /ekranda göster sırala//
/*
Neden direk yazmak yerine char  kullandık diyenler için 
Çünkü ilerde uzun kodlar yazdığında bir değişkeni mesela 30 farklı yerde kullanmak gerekebilir
hatta karmaşık ve uzun bir şey de olabilir bu değişken. Bu yüzden bir kere basit bir anahtar kelime ile tanımlayıp
kullanmak daha mantıklı. Değişiklik yapmak gerektiğinde de sadece yukarıda char'dan bir kere değişiklik yapmak yeterli olacak 
30 yeri tek tek değiştirmek yerine */

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
