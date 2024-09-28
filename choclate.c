#include <stdio.h>
void main() {
    printf("Enter amount of money : ");
    int n;
    scanf("%d",&n);
    int a=n;
    int b=n;
    while (b>=3) {
        b=b-2;
        a++;
    }
    printf("total chocolates = %d",a);
}