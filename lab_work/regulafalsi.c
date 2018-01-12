#include<stdio.h>
#define F(x) 3*x -1 -cos(x)
int main()
{
	float  x0,x1,x2,f1,f2,f0;
	int count = 0;
	do{
		printf("\nEnter the value of x0: ");
		scanf("%d",&x0);
	}while(F(x0)>0);
	do{
		printf("\nEnter the value of x1: ");
		scanf("%f",&x1);
	}while(F(x1)<0);
	printf("\n");
	

	do{
		f0=F(x0);
		f1=F(x1);
		x2=x0-((f0	
