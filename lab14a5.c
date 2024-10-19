#include<stdio.h>
void main()
{
    int h,w,i=0,ch=0,cw=0;
    int arr1[100],arr2[100];
    for(h=0;h<5;h++){
        printf("enter hight in cm");
        scanf("%d",&arr1[h]);
    }
    for(h=0;h<5;h++){if(arr1[h]>170){
        ch++;
    }}

    for(w=0;w<5;w++){
        printf("enter weight in kg");
        scanf("%d",&arr2[w]);
    }
    for(w=0;w<5;w++){if(arr2[w]>50){
        cw++;
    }}

printf("hight which is greter then 170=%d\n whight which is greter then 50=%d",ch,cw);

}