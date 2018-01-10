#include<stdio.h>
int main()
{
	int a[30],n,i,j=0,low=0,pivot,temp;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the elemnts of a[%d]:",j++);
		scanf("%d",&a[i]);
	}
	int high=(n-1);
	pivot=a[high];
	for(j=low;j<high;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
			temp=a[i+1];
	a[i+1]=a[high];
	a[high]=temp;
	}		
	printf("\nThe Sorted Array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
	
			
	
	
