#include<stdio.h>
int main()
{
	int n,i=1,ans=1;
	printf("enter the value of n ");
	scanf("%d",&n);
	while(i<=n){
		ans=ans*i;
		i++;
	}
printf("ans=%d",ans);
}
