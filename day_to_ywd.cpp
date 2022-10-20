#include<stdio.h>
int main()
{
	int n,y,w,d;
	printf("Enter Days: ");
	scanf("%d",&n);
	y=n/365;
	w=(n%365)/7;
	d=n-((y*365)+(w*7));
	printf("%d Years : %d Weeks : %d Days",y,w,d);
	return 0;
}
