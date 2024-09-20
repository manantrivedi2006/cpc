#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,d;
    printf("enter the value of a,b:");
    scanf("%d%d",&a,&b);

    int choice;
    scanf("%d",&choice);

    if(choice='+'){
        printf("%d",a+b);
    }
    else if(choice='-'){
        printf("%d",a-b);
    }
    else if(choice='*'){
        printf("%d",a*b);
    
    }
    else{
        printf("%d",a/b);
    }
}