#include<stdio.h>
#include<math.h>
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
	float s;
	s=sqrt(k);
	printf("%.2f",s);
	return 0;
}
