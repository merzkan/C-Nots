#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
*********pointer*****************************  %p
	int* myNum;
	int *myNum;
******************************************************************************************
	int a=1;
	char x="k";
	printf("%x",&a);   //62fe1c bellekteki yeri//
	printf("\n");
	printf("%x",&x);   //62fe1b bellekteki yeri//
******************************************************************************************
	int sayi=20;
	int *s=&sayi;	
	//sayýyý ekrana yazdýrma
	printf("deger: %d",sayi);
	printf("\n");
	//adresi ekrana yazdýrma
	printf("adres: %x",&s);
******************************************************************************************
	int myAge = 43;     // An int variable
	int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
	
	// Output the value of myAge (43)
	printf("%d\n", myAge);
	
	// Output the memory address of myAge (0x7ffe5367e044)
	printf("%p\n", &myAge);
	
	// Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("%p\n", ptr);
******************************************************************************************
	int myAge = 43;
	printf("%p", &myAge); // Outputs 0x7ffe5367e044
******************************************************************************************	
	//tanýmsýz davranýþý önleyen taþýnabilir kod için her zaman %p biçim belirticisini kullanýn.

	int myAge = 21;
	int* ptr=&myAge;
	printf("%d\n",*ptr);    // output  21
	printf("%d\n",myAge);   // output  21
	printf("%d\n",ptr);		// output  6487572
	printf("%d\n",&myAge);	// output  6487572
	printf("*************************\n");
	printf("%p\n",myAge);	// output 0000000000000015
	printf("%p\n",ptr);		// output 000000000062FE14
	printf("%p\n",&myAge);  // output 000000000062FE14
	printf("*************************\n");
	printf("%x\n",myAge); 	// output 15
	printf("%x\n",ptr);		// output 62fe14
	printf("%x\n",&myAge);  // output 62fe14
	printf("*************************\n");
	printf("%X\n",myAge); 	// output 15
	printf("%X\n",ptr);		// output 62FE14
	printf("%X\n",&myAge);  // output 62FE14
******************************************************************************************
	int myNumbers[4] = {25, 50, 75, 100};
	int i;

	for (i = 0; i < 4; i++) {
	  	printf("%p\n", &myNumbers[i]);
	}
	
	//output
	0x7ffe70f9d8f0
	0x7ffe70f9d8f4
	0x7ffe70f9d8f8
	0x7ffe70f9d8fc
******************************************************************************************
	//Ýlk elemanýn hafýza adresi dizinin ismiyle aynýdýr:
	int myNumbers[4] = {25, 50, 75, 100};
	
	// Get the memory address of the myNumbers array
	printf("%p\n", myNumbers);
	
	// Get the memory address of the first array element
	printf("%p\n", &myNumbers[0]);
	
	//output 
	0x7ffe70f9d8f0
	0x7ffe70f9d8f0
******************************************************************************************
	int myNumbers[4] = {25, 50, 75, 100};
	
	// Get the value of the first element in myNumbers
	printf("%d", *myNumbers); //output  25
******************************************************************************************
	int myNumbers[4] = {25, 50, 75, 100};
	
	// Get the value of the second element in myNumbers
	printf("%d\n", *(myNumbers + 1));  //output 50
	
	// Get the value of the third element in myNumbers
	printf("%d", *(myNumbers + 2));   //output
******************************************************************************************
	int myNumbers[4] = {25, 50, 75, 100};
	
	// Change the value of the first element to 13
	*myNumbers = 13;
	
	// Change the value of the second element to 17
	*(myNumbers +1) = 17;
	
	// Get the value of the first element
	printf("%d\n", *myNumbers);     //output 13
	
	// Get the value of the second element
	printf("%d\n", *(myNumbers + 1));    //output 17
******************************************************************************************
 */
int main() {

	return 0;
}
