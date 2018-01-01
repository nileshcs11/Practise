#include<stdio.h>
#define F(x) x+(1/x)
int main()
{
	float a,b,h,n,y0,s=0,p=0,t;
	int i=0;
	printf("\nEnter the lower and upper limit:");
	scanf("%f %f",&a,&b);
	printf("\nEnter the number of intervals:");
	scanf("%f",&n);
	h=(b-a)/n;
	y0=F(a)+F(b);
	while(a<=b-h)
	{
		i=i+1;
		a=a+h;
		if(i%2==0)
		{
			s= s+ F(a);	
		}	
		else
		{
			p= p+F(a);
		}
	}
	t=(h/3)*(y0+(2*s)+(4*p));
	printf("\nThe required Approx. Integral Value of the function is:  %f \n",t);
	return 0;
}
