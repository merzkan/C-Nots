#include <stdio.h>
#include <stdlib.h>

/*scanf("%s",kitabinad) kullanýcýdan veri almak için  
 *fareler ve insanlar = sadece fareleri yazdýrýr.
 *boþluga duyarlý 


int main() {

	char kitabinad[10];
	printf("kitabinadini giriniz: ");	
	scanf("%s",kitabinad);
	printf("kitabin adi: %s",kitabinad);
	
	return 0;
}
*/

int main(){
	char nick[10],surname[10],age[2],class[3];
	
	printf("nick name: ");
	scanf("%s",nick);
	
	printf("surname name: ");
	scanf("%s",surname);
	
	printf("age enter: ");	
	scanf("%s",age);
	
	printf("class enter: ");	
	scanf("%s",class);
	printf("*************************\n");
	printf("adi: %s\n",nick);
	printf("soyadi: %s\n",surname);
	printf("yasi: %s\n",age);
	printf("sinifi: %s\n",class);
	printf("*************************\n");
	printf("adi:%s\nsoyadi:%s\nyasi:%s\nsinifi:%s",nick,surname,age,class);//alternatif//
	
	return 0;
}
