#include<stdio.h>
int main()
{
	char a,ans;
	printf("enter the value of a:");
	scanf("%c",&a);
	ans=a>='A'&&a<='Z'||a<='z'&& a>='a'?(printf("a is  alphabet ")):(printf("a is not  alphabet "));
}
