#include <stdio.h>
void main() {
    printf("Enter a and b : ");
    int a,b,counter=0;
    scanf("%d %d",&a,&b);
    while (a>=b) {
        a=a-b;
        counter++;
    }
    printf("quotient = %d remainder = %d",counter,a);
}