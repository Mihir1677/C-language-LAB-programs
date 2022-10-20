#include <stdio.h>
int main()
{
	int s;
	float hra=0,da=0,gross=0;
	printf("Enter basic salary: ");
	scanf("%d",&s);
	if(s>=30000)
				{
	hra=s*0.3;
	da=s*0.95;
	gross=s+hra+da;
	printf("Gross salary = %f",gross);
				}
	else if(s>=20000){
	hra=s*0.25;
	da=s*0.9;
	gross=s+hra+da;
	printf("Gross salary = %f",gross);
}
    else if(s>=10000)
 					 {
hra=s*0.2;
da=s*0.8;
gross=hra+s+da;
printf("Gross salary = %f",gross);
					  }
    else{
    	printf("not valid");
	}
	return 0;
}
    
