#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int randoms,sayi;
	srand(time(NULL));
	randoms=rand()%5;
	printf("%d",randoms);
	printf("bir sayi giriniz:");
	scanf("%d",sayi);
    printf("%d,sayi");

	return 0;
}
