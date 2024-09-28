#include<stdio.h>
int main()
{
int a;
printf("enter the value of a :\n  ");
scanf("%d",&a);
switch(a){
	case 1:printf("days=31");
	break;
		case 2:{
			
		int year;
				printf("enter the year:");
				scanf("%d",&year);
				if(year%400==0||year%100!=0&&year%4==0){
					printf("days=29");
				}
				else{
					printf("days=28");
				}
			break;}
		
	
		case 3:printf("days=31");
		break;
		case 4:printf("days=30");
	break;
		case 5:printf("days=31");
	break;
		case 6:printf("days=30");
	break;
		case 7:printf("days=31");
	break;
		case 8:printf("days=31");
	break;
		case 9:printf("days=30");
	break;
		case 10:printf("days=31");
	break;
		case 11:printf("days=30");
	break;
	case 12:printf("days=31");
	break;
	
}

}

