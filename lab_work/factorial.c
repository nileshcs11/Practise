#include<stdio.h>
#include<stdlib.h>
int main(int n,char*a[])
{
	int i=0;
	if(n!=2)
	{
		printf("E");
		exit(0);
	}
	while(a[1][i]!='\0')
	{
		if(a[1][i]<48 || a[1][i]>57)
		{
			printf("E");
			exit(0);
		}
		i++;
	}
	int k,s=1,j;
	k=atoi(a[1]);
	if(k==0)
	printf("1");
	else
	{
		for(j=1;j<=k;j++)
		{
			s*=j;
		}
		printf("%d ",s);
	}
		return 0;
}
