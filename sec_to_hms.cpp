#include<stdio.h>
int main(){
	int n,h,m,s;
	printf("Enter Seconds: ");
	scanf("%d",&n);
	h=n/3600;
	m=(n-(3600*h))/60;
	s=(n-(3600*h))-(m*60);
	printf("%d Hours : %d Minutes : %d Seconds",h,m,s);
	return 0;
}
