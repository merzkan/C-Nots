#include <stdio.h>
#include <stdlib.h>

/*
	int i,j;
	for(i=1;i<=5;i+=1)
	{
		for(j=5;j>=i;j-=1)
		{
			printf("*");
		}
		printf("\n");
	}
	
*/

int main() {
int i,j;

	for(i=1 ; i<=5 ; i++){     //Kelebe�in �st yar�s�:
	
		for(j=1 ; j<=i ; j++){     //1 tane y�ld�z (i kadar y�ld�z)
			printf("*");
		}
		for(j=1 ; j<=5-i ; j++){     //4 bo�luk  (5-i kadar bo�luk)
			printf(" ");
		}
		for(j=1 ; j<=5-i ; j++){     //4 bo�luk  (5-i kadar bo�luk)
			printf(" ");
		}
		for(j=1 ; j<=i ; j++){      //1 y�ld�z (i kadar y�ld�z)
			printf("*");
		}
		printf("\n");    //Sonra alt sat�ra ge�.	
	
	}
	
	for(i=5 ; i>=1 ; i--){     //Kelebe�in alt yar�s�:
		
		for(j=1 ; j<=i ; j++){
			printf("*");	
		}
		for(j=1 ; j<=5-i ; j++){
			printf(" ");
		}
		for(j=1 ; j<=5-i ; j++){
			printf(" ");
		}
		for(j=1 ; j<=i ; j++){
			printf("*");	
		}
		printf("\n");
	}	
	return 0;
}
