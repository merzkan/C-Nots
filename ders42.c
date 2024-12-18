#include <stdio.h>
#include <stdlib.h>

/*
--Struct--
*********************************************************
char myString[30]; olmaz    Ancak bunun bir çözümü var! strcpy() iþlevini kullanabilir ve deðeri s1.myString'e þu þekilde atayabilirsiniz:
*********************************************************
	struct kitapbilgi
	{
		char kitapad[20];
		char kitapyazar[20];
		int fiyat;
		float puan;
	};

	int main() {
	struct kitapbilgi n1={"roman","omer ozkan ozdil",20,6.5};
	
	printf("kitap adi:%s\n",n1.kitapad);
	printf("kitabin yazari:%s\n",n1.kitapyazar);	
	printf("kitabin fiyati:%d\n",n1.fiyat);	
	printf("kitabin puani:%2.f\n",n1.puan);	
*********************************************************
	struct kitapbilgi
	{
		char kitapad[30];
		char kitapyazar[30];
		int fiyat;
		float puan;
	};
	

	int main() {
		struct kitapbilgi n1;
		printf("kitap adini giriniz:");
		scanf("%s",n1.kitapad);
		printf("kitap yazarini giriniz:");
		scanf("%s",n1.kitapyazar);
		printf("kitabin fiyatini giriniz:");
		scanf("%d",&n1.fiyat);
		printf("kitabin puanini giriniz:");
		scanf("%f",&n1.puan);	
		printf("kitap adi:%s\n",n1.kitapad);
		printf("kitap yazari:%s\n",n1.kitapyazar);	
		printf("kitap fiyati:%d\n",n1.fiyat);	
		printf("kitap puani:%f\n",n1.puan);
***********************************************************	
	// Create a structure
	struct myStructure {
	  int myNum;
	  char myLetter;
	  char myString[30];
	};
	
	int main() {
	  // Create a structure variable and assign values to it
	  struct myStructure s1 = {13, 'B', "Some text"};
	
	  // Print values
	  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
	
	}
***********************************************************	

	struct myStructure s1 = {13, 'B', "Some text"};
	struct myStructure s2;
	
	s2 = s1;
***********************************************************	
	//char myString[30]; olmaz    Ancak bunun bir çözümü var! strcpy() iþlevini kullanabilir ve deðeri s1.myString'e þu þekilde atayabilirsiniz:
	struct myStructure {
	  int myNum;
	  char myLetter;
	  char myString[30]; // String
	};
	
	int main() {
	  struct myStructure s1;
	
	  // Assign a value to the string using the strcpy function
	  strcpy(s1.myString, "Some text");
	
	  // Print the value
	  printf("My string: %s", s1.myString);
	
	  return 0;
	}
***********************************************************	
*/
int main() {

	return 0;
}
