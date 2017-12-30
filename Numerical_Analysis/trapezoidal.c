#include<stdio.h>
#include<math.h>
#define F(x) (1/(1+x*x))
int main()
{
	float a,b,n,u,s,t,f0,f1;
	printf("\nEnter the lower and upper limit:");
	scanf("%f %f",&a,&b);
	printf("\nEnter the no. of subintervals:");
	scanf("%f",&n);
	u=(b-a)/n;
	f0=F(a);
	f1=F(b);
	while(a<(b-u))
	{
		a=a+u;
		s= s+F(a);
	}
	t=((f0+f1)+(2*s))*(u/2);
	printf("\nThe Approx. Integral value of the given function is: %f\n",t);
	return 0;
}
