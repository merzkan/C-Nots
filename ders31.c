#include <stdio.h>
#include <stdlib.h>



/* matematik fonksiyonlarý   #include <math.h>
***********************************
sqrt(gir) = karekök alma.
pow(gir) = üst alma.
floor(gir) = ondalýklý sayýyý alt sayýya yuvarlama 2.4 -->  2
ceil(gir) = ondalýklý sayýyý üstündeki sayýya yuvarlama 2.4 --> 3
fabs(gir) = mutlak deðer.
log(gir) = fonksiyonu, tabaný e=2.71828182846 olan doðal logaritma deðerlerini bulmak için kullanýlýr.
log10(gir) = logu 10 tabanýnda alýr.
sin(derece) = sinüs deðerini verir.
***********************************
double için %lf kullanýlýr   scanf("%lf",&someting);
***********************************
girilen sayýnýn karekökünü alma
	int sayi;
	double sonuc;
	printf("sayiyi giriniz");
	scanf("%d",&sayi);
	sonuc=sqrt(sayi);
	printf("%f",sonuc); 
***********************************
taban ve üssü girilen sayýnýn deðerini bulma üslü sayý
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
