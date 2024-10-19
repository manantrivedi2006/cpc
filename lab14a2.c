
#include<stdio.h>
void main()
{
    int arr[100],n,i,cp=0,cn=0;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&arr[i]);}
    for(i=0;i<n;i++){ if(arr[i]>0){
        cp++;
     }
     else{
        cn++;
     }
    }
        
       printf("%d %d",cp,cn);
    }
