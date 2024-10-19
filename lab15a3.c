#include<stdio.h>
void main()
{
    int arr[100],n,i=0,count=0;
    printf("enter a value of n ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter a value of arr[i] :");
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        if(arr[i]%3==0){
            
            count++;

        }

    }
    printf("numbers which divisible by 3 are=%d",count);
}