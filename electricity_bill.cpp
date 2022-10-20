#include <stdio.h>
int main()
{
	int u=0;
	double total=0,price=0,tax=0;
	printf("Enter unit: ");
	scanf("%d",&u);
	if(u<=50)
	{
		price=0.50*u;
	}
	else if(u<=150)
	{
		price=50*0.5+(u-150)*0.75;
	}
	else if(u<=250)
	{
		price=50*0.50+100*0.75+(u-250)*1.20;
	}
	else if(u>250)
	{
		price=50*0.5+100*0.75+100*1.20+(u-250)*1.50;
	}
	else{
		printf("unit should be more than 0");
	}
	tax=price*0.20;
	total=price+tax;
	printf("Total Electricity Bill = %lf",total);
	return 0;
}

