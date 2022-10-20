#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number, the number will be multiplied and divided by 2: ");
	scanf("%d",&a);
	printf("%d * 2 = %d",a,a<<1);
	printf("\n%d / 2 = %d",a,a>>1);
	return 0;
}
