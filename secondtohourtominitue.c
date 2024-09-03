#include<stdio.h>
void main()
{
    int second,hour,minitue;
    printf("enter a value of second");
    scanf("%d",&second);
    hour=second/3600;
    second=second%3600;
    minitue=second/60;
    second=second%60;
    printf("hour=%d,minitue=%d,second=%d",hour,minitue,second);
}