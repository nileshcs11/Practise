#include<stdio.h>
int main()
{
	int a[20],n,i,j,min,temp;
	printf("\nEnter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter the elemnt of a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("\nAfter sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
