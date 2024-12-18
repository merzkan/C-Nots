#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  
********************************************************************
	int num,new=0,kalan,temp;
	scanf("%d",&num);
	temp=num;
	while(temp>0){
		kalan=temp % 10;
		new = (new*10) + kalan;
		temp = temp/10;
	}
	
if (num == new){
	printf("sayinin tersi:");
}
else{
	printf("not");
}
printf("%d",new);
*******************************************************************
int a =0 , b = 0, c = 0; 
a = ++b + ++c;
********************************************************************
int a =0 , b = 0, c = 0; 
void print(){
	printf("a'nin degeri:%d\nb'nin degeri:%d\nc'nin degeri:%d\n\n",a,b,c);
}

int main(){

	a = b++ + c++;  //	0 1 1
	print();
	a = ++b + ++c; //	4 2 2
	print();
	a = b++ + c++; //	4 3 3 
	print();
	a = ++b + c++; //	7 4 4
	print();
	a = b-- + --c; //   7 3 3
	print();

***********************************************************************
	int year;
	printf("enter a number:");
	scanf("%d",&year);
	if ((year%4==0)&&(year%100!=0||year%400==0)){
		printf("%d is a leap yer.\n",year);
	}
	else
		printf("%d is not a leap year.\n",year);
***********************************************************************
	int sum=0,i,num=7;
	for(i=1;i<num;i++){
		if(num%i==0){
			sum += i;
		}
	}
	if(sum==num){
		printf("a number");
	}
	else{
		printf("it's not number");
	}
***********************************************************************
	int isalphabet(char c){
		return (c>='a' && c <= 'z') || (c >= 'A' &&  c <= 'Z');
	}
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	if(isalphabet(c))
		printf("%c is an alphabet.",c);
	else
		printf("%c is not an alphabet.",c);
***********************************************************************
long toBin(int);

int main()
{
    long bno;
    int dno;
	printf("\n\n Function : convert decimal to binary :\n");
    printf(" Input any decimal number : ");
    scanf("%d",&dno);
    bno = toBin(dno);
    printf("\n The Binary value is : %ld\n\n",bno);

    return 0;
}
long toBin(int dno)
{
    long bno=0,remainder,f=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    return bno;
***********************************************************************
	int n[5] = {32,27,64,18,95};
	printf("%s%6s\n", "Element", "Value");
	for (int i = 0; i < 5; ++i) {
		printf("%7d%8d\n", i, n[i]);
	} 
***********************************************************************
int digit(int num);

int main(void){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	digit(num);
	return 0;
}
int digit(int num){
	int count=0;
	while(num >= 1){
		num = num / 10;
		count +=1;
	}
	return printf("%d",count);
}
***********************************************************************
int fac(int num);

int main(void){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	fac(num);
	return 0;
}

int fac(int num){
	int i = 1,fac = 1;
	for(i;num>=i;i++){
		fac = i * fac;
	}
	return printf("%d",fac);
***********************************************************************
int fac(int num);

int main(void){
	for(int i=1;i<=10;i++){
		printf("%d!=%d\n",i,fac(i));
	}
	return 0;
}
int fac(int num){
	if(num <=1){
		return 1;
	}
	else
		return (num * fac(num-1));
}
***********************************************************************
int main(void){
	int num,count,a,b,c;
	for(int i=100;i<=999;i++){
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(a!=b && a!=c && b!=c){
			count += 1;
		}
	}
	printf("%d",count);
	return 0;
}
***********************************************************************
321   1    12   123
*/
int my_alpha(int c);

int main() {
	int c;
	printf("enter a random key:\n");
	scanf("%d",&c);
	
	if(my_alpha(c)==1){
		printf("you entered a letter.");
	}
	else{
		printf("you did not enter a letter.");
	}
    return 0;
}
int my_alpha(int c){
	return (c >= 'a' && c <= 'z')  || (c >= 'A' && c <= 'Z');
}
