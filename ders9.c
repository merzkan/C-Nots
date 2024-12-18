#include <stdio.h>
#include <stdlib.h>

/*  ***************************************************************
	mod alma         = %
	ve               = &&
	veya             = ||
	eþit midir?      = ==
	eþit deðil midir = !=
    ****************************************************************
	int s1;
	printf("bir sayi giriniz:");
	scanf("%d",&s1); 
	if(s1%2==0){//sayýnýn 2 ile bölümünden kalan 0 ise.//
		printf("sayi cifttir.");
	}
	else{
		printf("sayi tektir.");
	}
	****************************************************************
	//3 ve 5 tam bölünen sayýyý bulma//
	int s1;
	printf("bir sayi giriniz:");
	scanf("%d",&s1); 
	if(s1%3==0 && s1%5==0){
		printf("%d sayisi 3 ve 5'e tam bolunur.'",s1);
	}
	else{
		printf("%d sayisi 3 ve 5'e tam bolunmez.",s1);
	}
	****************************************************************
	//klavyeden girilen dereceye göre suyun durumunu yazdýran program//
	int s1;
	printf("suyun derecesini giriniz:");
	scanf("%d",&s1);
	if(s1<=0){
		printf("su buz halinde.");
	}
	if(s1>0 && s1<100){
		printf("su sivi halde.");
	}
	if(s1>=100){
		printf("su buhar halinde.");
	}
	****************************************************************
	float s1,s2,s3,p,ort;
	printf("1.sinav notunu giriniz.");
	scanf("%f",&s1);
	printf("2.sinav notunu giriniz.");
	scanf("%f",&s2);
	printf("3.sinav notunu giriniz.");
	scanf("%f",&s3);
	printf("proje notunu giriniz.");
	scanf("%f",&p);
	ort=(s1+s2+s3+p)/4;
	if(ort<=50){
		printf("ortalamaniz:%f --> FF",ort);
	}
	if(ort>50 && ort<=60){
		printf("ortalamaniz:%f --> DD",ort);
	}
	if(ort>60 && ort<=70){
		printf("ortalamaniz:%f --> CC",ort);
	}
	if(ort>70 && ort<=85){
		printf("ortalamaniz:%f --> BB",ort);
	}
	if(ort>85 && ort<=100){
		printf("ortalamaniz:%f --> AA",ort);
	}
	****************************************************************
*/

int main() {
		float s1,s2,s3,p,ort;
	printf("1.sinav notunu giriniz.");
	scanf("%f",&s1);
	printf("2.sinav notunu giriniz.");
	scanf("%f",&s2);
	printf("3.sinav notunu giriniz.");
	scanf("%f",&s3);
	printf("proje notunu giriniz.");
	scanf("%f",&p);
	ort=(s1+s2+s3+p)/4;
	if(ort<=50){
		printf("ortalamaniz:%f --> FF",ort);
	}
	if(ort>50 && ort<=60){
		printf("ortalamaniz:%f --> DD",ort);
	}
	if(ort>60 && ort<=70){
		printf("ortalamaniz:%f --> CC",ort);
	}
	if(ort>70 && ort<=85){
		printf("ortalamaniz:%f --> BB",ort);
	}
	if(ort>85 && ort<=100){
		printf("ortalamaniz:%f --> AA",ort);
	}

		
	return 0;
}
