#include<stdio.h>
int fact(int n);
int main()
{
int n,f;

	printf("enter n:");
scanf("%d",&n);
f=fact(n);
printf("factorial is =%d",f);

}
int fact(int n){
	if (n==0){
		return 1;
	}
	return n*fact(n-1);
	
}
