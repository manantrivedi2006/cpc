#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=1,sum=0;
    printf("enter the value of n ");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+pow((-1),i)*i;
    }
    printf("sum=%d",sum);
}