#include<stdio.h>
#include<stdlib.h>
int main()
{
	char n;
	printf("Do you want to turn off your system? (Y/N)  =>  ");
	scanf("%c",&n);
	if(n=='y'||n=='Y')
	{
		system("C:\\WINDOWS\\System32\\shutdown /s");
		printf("Turning off system...");
	}
	else if(n=='n'||n=='N')
	{
		printf("Access Denied to turn off");
	}
	else{
		printf("Please enter Y or N");
	}
	return 0;
}
