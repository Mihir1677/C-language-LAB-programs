#include<stdio.h>
#include<time.h>
int main()
{
	char a;
	time_t tm;
	time(&tm);
	printf("Inpute D to print current date and time: ");
	scanf("%s",&a);
	if(a=='d'||a=='D'){
	printf("\n Current Date & Time is: %s",ctime(&tm));}
	else{
		printf("Input was not valid");
	}
	return 0;
}
