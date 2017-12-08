#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
		else
			return 1;
	}
}
int main()
{
	int n,i,j;
	printf("\nEnter the range:");
	scanf("%d",&n);
	for(i=4;i<=n;i=i+2)
	{
		for(j=3;j<n;j++)
		{
			if(isprime(j)&&isprime(i-j)==1)
			{
				printf("\n\n%d + %d = %d\n",(i-j),j,i);
			}
			break;
			
		}
	}
	return 0;
}
