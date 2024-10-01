#include<stdio.h>
int main()
{
	int n=100;
	for(n;n<200;n++){
		if(n%7==0&&n%5!=0){
			printf("%d\n",n);
		}
	}
}
