#include<stdio.h>
void main()
{
    int arr[100],n,i,ce=0,co=0;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&arr[i]);}
    for(i=0;i<n;i++){ if(arr[i]>0){
        ce++;
     }
     else{
        co++;
     }
    }
        
       printf("%d %d",ce,co);
    }
