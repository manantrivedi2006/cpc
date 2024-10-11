#include<stdio.h>
int main()
{
	int a,i=1;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	for(i;i<=10;i++){
		printf("%d*%d=%d\n",a,i,a*i);
	}
}
