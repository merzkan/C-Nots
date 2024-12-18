#include <stdio.h>
#include <stdlib.h>

/*
***********fonksiyonlar****************************
void geriye dönmeyen fonksiyon
     geriye deðer döndüren fonksiyonlar
***************************************************
void listeler()
{
	printf("merhaba\n");
	printf("naber\n");
	printf("nasilsin");
}

int main() {
	listeler();
***************************************************
int toplam(int s1,int s2)
{
	int s3;
	s3=s1+s2;
	return s3;
}
int main() {
	int t;
	t=toplam(4,5);
	printf("%d",t);
****************************************************
int toplam(int s1,int s2)
{
	int s3;
	s3=s1+s2;
	return s3;
}

int main() {
	int n1,n2,a;
	printf("toplamak istediginiz ilk sayiyi giriniz:");
	scanf("%d",&n1);
	printf("toplamak istediginiz ikinci sayiyi giriniz:");
	scanf("%d",&n2);
	a=toplam(n1,n2);
	printf("%d",a);
***************************************************
int sayi(int a)
{
	int kok;
	kok=sqrt(a);
	return kok;
}
int main()
{
	int n1;
	printf("bir sayi gir:");
	scanf("%d",&n1);
	printf("%d",sayi(n1));
*****************************************************
// en ve boy degerine gore dikdortgen cizdirme
void dikdortgen(int kisa,int uzun)
{
	int i,j;
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<kisa;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int n1,n2;
	printf("kisa kenari giriniz:");
	scanf("%d",&n1);
	printf("uzun kenari giriniz:");
	scanf("%d",&n2);
	dikdortgen(n1,n2);
****************************************************
	// Function declaration
	void myFunction();
	
	// The main method
	int main() {
	  myFunction();  // call the function
	  return 0;
	}
	
	// Function definition
	void myFunction() {
	  printf("I just got executed!");
	}
****************************************************
	// Function declaration
	int myFunction(int, int);
	
	// The main method
	int main() {
	  int result = myFunction(5, 3); // call the function
	  printf("Result is = %d", result);
	  return 0;
	}
	
	// Function definition
	int myFunction(int x, int y) {
	  return x + y;
	}
****************************************************
*/ 
int main(){
	return 0;
}
