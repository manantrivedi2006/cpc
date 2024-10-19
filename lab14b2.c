#include<stdio.h>
#include<math.h>
void main()
{
    int arr[100],n,i=0,sum=0;
    printf("enter value of n: ");
    scanf("%d",&n);
    float avg,gm,hm,g=0,h=0;
    for(i=0;i<n;i++){
        printf("enter a value of arr");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
      for(i=0;i<n;i++){
        g=g*arr[i];
        h=h+(1/arr[i]);
      } 
      gm=pow(g,1/n);
      hm=n/h; 
    }
    avg=sum/n;
 printf("avg=%f hm=%f gm=%f",avg,hm,gm);   
}