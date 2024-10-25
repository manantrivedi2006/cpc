#include<stdio.h>
int main()
{
	int r=3,c=3,arr1[100][100],arr2[100][100],ansarr[100][100],i=0,j=0;


	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the elements of arr1: ");
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the elements of arr2: ");
			scanf("%d",&arr2[i][j]);
		}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d ",ansarr[i][j]=arr1[i][j]+arr2[i][j]);
		
		
		
		}
		printf("\n");
		
		}
}
