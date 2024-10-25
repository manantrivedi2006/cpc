#include<stdio.h>
int main()
{
	int cn=0,cp=0,cz=0,r=3,c=3,arr[100][100],i=0,j=0;

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the elements: ");
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		if(arr[i][j]<0){
			cn++;
		}else if(arr[i][j]>0){
			cp++;
		}
		else{
			cz++;
		}
		
		}
		
		}
			printf("negitive=%d positive=%d zero=%d",cn,cp,cz);
		
		
		}
	


