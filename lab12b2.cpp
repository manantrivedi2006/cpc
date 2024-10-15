#include<stdio.h>
int main()
{
	int i=1;
	float n,a=1,sum=1;
	printf("enter the value of n");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
	a=a*i;	
	sum=sum+(1/a);
	}
	printf("%f",sum);
}
