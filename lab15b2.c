
#include<stdio.h>
void main()
{
    int arr[100],n,i;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&arr[i]);
     
    }
       
    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}
