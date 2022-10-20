#include<stdio.h>
int main()
{
	char op;
	int a,b,c;
	printf("Enter +,-,*,/  : ");
	scanf("%s",&op);
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	if(op=='+')
	{
		c=a+b;
		printf("%d + %d = %d",a,b,c);
	}
	else if(op=='-')
	{
		c=a-b;
		printf("%d - %d = %d",a,b,c);
	}
	else if(op=='*')
	{
		c=a*b;
		printf("%d * %d = %d",a,b,c);
	}
	else if(op=='/')
	{
		c=a/b;
		printf("%d / %d = %d",a,b,c);
	}
	else
	{
		printf("Not valid");
	}
	return 0;
}
