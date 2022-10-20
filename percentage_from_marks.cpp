#include <stdio.h>
int main()
{
	int paper,mpp,scoredm,tpm;
	double percentage;
	printf("Enter number of papers: ");
	scanf("%d",&paper);
	printf("Enter total marks per one paper: ");
	scanf("%d,&mpp");
	tpm=mpp*paper;
	printf("Enter your total scored marks from => ");
	scanf("%d",&scoredm);
	percentage=(scoredm*100)/480;
	printf("Your percentage is %lf",percentage);
	return 0;
}
