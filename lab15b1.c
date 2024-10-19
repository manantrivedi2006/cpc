#include<stdio.h>
void main()
{
    int arr[100],n,i=0,j=0;
    printf("enter value of n:");
   scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter value of arr[i]: ");
    scanf("%d",&arr[i]);
  }
    for(i=0;i<n;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
            }
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}