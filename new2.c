#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D,x,y;
    printf("enter the value of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D==0){
        x=y=-b/(2*a);
    printf("routs are real and equale");
    printf("%f %f",x,y);
    }
    else{
        if(D>0){
            x=(-b-sqrt(D))/(2*a);
            y=(-b+sqrt(D))/(2*a);
            printf("routs are real and diffrent");
            printf("%f %f",x,y);
            
        }
        else{
            printf("input is invalid");
        }
    }

}