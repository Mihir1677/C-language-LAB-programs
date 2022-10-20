#include  <stdio.h>
int main()
{
	char n;
	printf("Enter anything: ");
	scanf("%c",&n);
	if(n>=65&&n<=90){
		printf("It's upper case");
	}
	else if(n>=97&&n<=122){
		printf("It's lower case");
	}
	else if(n>=47&&n<=57){
		printf("It's number");
	}
	else{
		printf("It's special character");
	}
	return 0;
}
