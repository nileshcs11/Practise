//Selection Sort
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
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("\nAfter sorting: ");
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
