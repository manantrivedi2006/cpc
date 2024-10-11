#include<stdio.h>
int main()
{
	int n,a,b,sum=0,i=;
	printf("enter the value of a :\n");
	scanf("%d",&a);
	while(a!=0){
		b=a%10;
		n=b*b*b;
		a=a/10;
		sum=sum+n;	
	}
	printf("ans=%d",sum);
}
