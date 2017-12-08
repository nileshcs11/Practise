#include<stdio.h>
#include<stdlib.h>
int main(int n,char*a[])
{
	int i=0;
	if(n!=2)
	{
		printf("E");
		exit(1);
	}
	while(a[1][i]!='\0')
	{
		if(a[1][i]<48 || a[1][i]>57)
		{
			printf("E");
			exit(0);
		}i++;
	}
	int k=atoi(a[1]);
	int p,s=0,r;
	p=k;
	if(k==0)
	printf("E");
	else
	{
		while(k>0)
		{
			r=k%10;
			s=s*10+r;
			k=k/10;
		}
		if(s==p)
		printf("%d ",s);
		else
		printf("E");
	}
	return 0;
}
