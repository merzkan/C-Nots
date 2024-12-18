#include <stdio.h>
#include <stdlib.h>

/*  For döngüsü
	for (statement 1; statement 2; statement 3) {
 	 // code block to be executed
	}
	for(baþlangýç;þart;deðiþim)
	(baþlangýç,bitiþ,artýþ miktarý) parametresi.  sayi++  sayi+=1 ikiside sayýyý bir arttýr.
	*************************************************************************************************
	
	//ekrana 10 defa yazdýran pragram//
	int i;
	for(i=1;i<=10;i++){
		printf("hello world\n");
	}
	
	********************************************************************************************
	
	//1den 20ye kadar tam sayýlarý alt alta yazan program.//
	int j;
	for(j=1;j<=20;j+=1){
	printf("%d\n",j);
}
	********************************************************************************************
	
	//1den 20ye kadar çift tam sayýlarý alt alta yazan program.//
	int j;
	for(j=0;j<=20;j+=2){
		printf("%d\n",j);
	}
	
	********************************************************************************************
 */

int main() {
	int i;
	for(i=1;i<=10;i+=1)
	{
		printf("%d\n",i);
	}
	return 0;
}
