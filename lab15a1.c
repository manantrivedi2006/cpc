#include<stdio.h>
void main()
{
    int arr1[100],n,i,arr2[100];
    printf("enter value of n ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter value of arr1 ");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
        
    printf("arr2[i]=%d\n",arr2[i]);
    }

}