#include<stdio.h>
void prime(int a,int b);
void main(){
	int a,b;
	printf("enter a and b :");
	scanf("%d %d",&a,&b);
	prime(a,b);
}
void prime(int a,int b){
	int i=a,n=2,c=0;
	for(i;i<b;i++){
	    c=0;
		for(n=2;n<i;n++){
		
		if(i%n==0){
			c=c+1;
		}
		}
	if(c==0){
		printf("%d\n",i);
}
	}
	}
