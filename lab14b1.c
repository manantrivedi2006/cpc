#include<stdio.h>
void main()
{
    int arr[100],n,i=0,sum=0,ch=0;
    float avg;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter value of arr: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }
    avg=sum/n;
    for(i=0;i<n;i++){
    if(avg<arr[i]){
        ch++;
    }
    
    }
    printf("%d",ch);
    }