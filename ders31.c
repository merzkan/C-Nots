#include <stdio.h>
#include <stdlib.h>



/* matematik fonksiyonlar�   #include <math.h>
***********************************
sqrt(gir) = karek�k alma.
pow(gir) = �st alma.
floor(gir) = ondal�kl� say�y� alt say�ya yuvarlama 2.4 -->  2
ceil(gir) = ondal�kl� say�y� �st�ndeki say�ya yuvarlama 2.4 --> 3
fabs(gir) = mutlak de�er.
log(gir) = fonksiyonu, taban� e=2.71828182846 olan do�al logaritma de�erlerini bulmak i�in kullan�l�r.
log10(gir) = logu 10 taban�nda al�r.
sin(derece) = sin�s de�erini verir.
***********************************
double i�in %lf kullan�l�r   scanf("%lf",&someting);
***********************************
girilen say�n�n karek�k�n� alma
	int sayi;
	double sonuc;
	printf("sayiyi giriniz");
	scanf("%d",&sayi);
	sonuc=sqrt(sayi);
	printf("%f",sonuc); 
***********************************
taban ve �ss� girilen say�n�n de�erini bulma �sl� say�
	int x,y;
	int sonuc;
	printf("tabani giriniz:");
	scanf("%d",&x);
	printf("ussu giriniz:");
	scanf("%d",&y);
	sonuc=pow(x,y); 
    printf("%d",sonuc);
***********************************
	double s1,sonuc1,sonuc2;
	printf("degeri giriniz:");
	scanf("%lf",&s1);
	sonuc1=floor(s1);
	sonuc2=ceil(s1);
	printf("%f",sonuc1);
	printf("\n");
	printf("%f",sonuc2);
***********************************
	double sayi,sonuc;
	printf("sayiyi giriniz:");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("%lf",sonuc);
***********************************
	double sayi,sonuc;
	printf("sayiyi giriniz:");
	scanf("%lf",&sayi);	
	sonuc=log(sayi);
	printf("%f",sonuc);
************************************
	double derece,sonucsin,sonuccos;
	printf("dereceyi giriniz:");
	scanf("%lf",&derece);	
	sonucsin=sin(derece);
	sonuccos=cos(derece);
	printf("%lf\n",sonucsin);
	printf("%lf",sonuccos);
*************************************
*/

int main() {

	return 0;
}
