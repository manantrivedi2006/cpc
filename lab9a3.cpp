#include<stdio.h>
int main()
{
	int n,i,ans=1,b=1;
	printf("enter the value of n and i");
	scanf("%d %d",&n,&i);
	while(b<=i){
		ans=ans*n;
		b++;
	}
	printf("ans=%d",ans);
}
