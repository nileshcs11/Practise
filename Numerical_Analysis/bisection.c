#include<stdio.h>
#include<math.h>
#define F(x) (x*x)-4
#define EPS 0.001
int main()
{
	float x0,x1,x2;
	double f0,f1,f2;
	printf("\nEnter the value of x0:");
	scanf("%f",&x0);
	printf("\nEnter the value of x1:");
	scanf("%f",&x1);
	printf("\nx0\t\tx1\t\tx2\t\tf0\t\tf1\t\tf2");
	printf("\n============================================================================================\n");
	do
	{
		x2=(x0+x1)/2;
		f0=F(x0);
		f1=F(x1);
		f2=F(x2);
		printf("\n%f\t%f\t%f\t%f\t%f\t%f\n",x0,x1,x2,f0,f1,f2);
		if(f0*f2<0)
		{
			x1=x2;
		}
		else
		{
			x0=x2;
		}
	}while(fabs(f2)>EPS);
	printf("\n============================================================================================\n");
	printf("\n\nApprox. Root = %f\n\n",x2);
	return 0;
}



















