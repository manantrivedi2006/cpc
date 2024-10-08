#include<stdio.h>
int main(){
	int n,digit,rev=0,a;
	printf("enter the value of n ");
	scanf("%d",&n);
	while(n>0){
a=n%10;
rev=(rev*10)+a;
n=n/10;
		
	}
	while(rev>0)
{
	digit=rev%10;
	switch(digit){
		case 1:printf("one");break;
		case 2:printf("two");break;
		case 3:printf("three");break;
		case 4:printf("four");break;
		case 5:printf("five");break;
		case 6:printf("six");break;
		case 7:printf("seven");break;
		case 8:printf("eight");break;
		case 9:printf("nine");break;
		default :printf("zero");break;
		
	}
	rev=rev/10;
}
	
	
}
