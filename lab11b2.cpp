#include<stdio.h>
int main()
{
	int n,i=1,a,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
	printf("enter value of n ");
	scanf("%d",&n);
	for(i;n!=0;i++){
		a=n%10;
		n=n/10;
		switch(a){
			case 0:c0++;break;
			case 1:c1++;break;
			case 2:c2++;break;
			case 3:c3++;break;
			case 4:c4++;break;
			case 5:c5++;break;
			case 6:c6++;break;
			case 7:c7++;break;
			case 8:c8++;break;
			case 9:c9++;break;

			
		}
	}
				printf("c0=%d c1=%d c2=%d c3=%d c4=%d c5=%d c6=%d c7=%d c8=%d c9=%d",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);




}
