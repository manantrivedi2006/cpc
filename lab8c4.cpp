#include<stdio.h>
int main(){
	int a,b,sum=0,i=1;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	while(i<=b){
		sum=sum+a;
		i++;
	}
		printf("%d",sum);
}
