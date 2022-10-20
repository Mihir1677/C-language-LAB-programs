#include <stdio.h>
int main()
{
	float pr;
	int mark,m1,m2,m3,m4,m5,total;
	printf("Enter marks of five subject: ");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	if(total<=500){
	pr=(total*100)/500;
	if(pr<35){
		printf("%f  Class: fail");}
		else if(pr>=35&&pr<45){
			printf("%f  Class: pass",pr);}
		else if(pr>=45&&pr<60){
			printf("%f  Class: 2nd class",pr);}
		else if(pr>=60&&pr<70){
			printf("%f  Class: 3rd class",pr);}
		else if(pr>=70&&pr<=100){
			printf("%f  Class: Distinction",pr);}
	}
		else{
			printf("Your total marks should be under 500");}
 		
return 0;
}
