//last digit is odd or even
#include<stdio.h>
int main()
{
	int a,c;
	printf("Enter any value: ");
	scanf("%d",&a);
	c=a%10;
	if(c%2==0){
		printf("Last digit %d is odd",c);
	}
	else{
		printf("Last digit %d is even",c);
	}
}
