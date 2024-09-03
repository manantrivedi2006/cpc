#include<stdio.h>
void main()
{
    int day,year,week;
    printf("enter a value of day ");
    scanf("%d",&day);
    year=day/365;
    day=day%365;
    
    
    week=day/7;
    day=day%7;
    printf("year=%d,week=%d,day=%d",year,week,day);
}