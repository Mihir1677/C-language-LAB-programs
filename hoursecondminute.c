#include <stdio.h>
int main()
{
	int n,s,h,m;
	printf("Enter Seconds: ");
	scanf("%d",&n);
	h=n/3600;
	m=(n-(h*3600))/60;
	s=(n-(h*3600)-(m*60));
	printf("\n%d Hours : %d Minutes : %d Seconds",h,m,s);
	return 0;
}
