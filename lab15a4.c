#include<stdio.h>
void main()
{
    int arr[100],n,i=0,count=0,j;
    printf("enter a value of n ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter a value of arr[i] :");
        scanf("%d",&arr[i]);}
       printf("enter a value of j ");
    scanf("%d",&j);
        for(i=0;i<n;i++){
            if(j==arr[i]){
                printf("found");
            }
            

        }
    
        
    }
    