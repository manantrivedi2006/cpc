#include<stdio.h>
int main()
{
	int i=1,sum=0,n,prod;
	printf("enter the value of n:");
	scanf("%d",&n);
while(i<=n){

	prod=i*i;
	sum=sum+prod;
	i++;
}
printf("%d",sum);

}
