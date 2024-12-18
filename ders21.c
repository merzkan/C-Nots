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

	for(i=1 ; i<=5 ; i++){     //Kelebeðin üst yarýsý:
	
		for(j=1 ; j<=i ; j++){     //1 tane yýldýz (i kadar yýldýz)
			printf("*");
		}
		for(j=1 ; j<=5-i ; j++){     //4 boþluk  (5-i kadar boþluk)
			printf(" ");
		}
		for(j=1 ; j<=5-i ; j++){     //4 boþluk  (5-i kadar boþluk)
			printf(" ");
		}
		for(j=1 ; j<=i ; j++){      //1 yýldýz (i kadar yýldýz)
			printf("*");
		}
		printf("\n");    //Sonra alt satýra geç.	
	
	}
	
	for(i=5 ; i>=1 ; i--){     //Kelebeðin alt yarýsý:
		
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
