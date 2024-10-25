#include<stdio.h>
int main()
{
	int r,c,arr[100][100],i=0,j=0;
	printf("enter value of r: ");
	scanf("%d",&r);
printf("enter value of c: ");
	scanf("%d",&c);

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the elements: ");
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d",arr[i][j]);
		
		
		
		}
		printf("\n");
		
		}
}
