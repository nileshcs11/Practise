#include<stdio.h>
int partition(int a[],int p,int r)
{
	int i,j,k,temp;
	k=a[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(a[j]<=k)
		{
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return (i+1);
}
void quicksort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main()
{
	int a[50],n,p,r,i;
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	printf("\nEnter elements of array:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=1;
	r=n;
	quicksort(a,p,r);
	printf("\nAfter Sorting:");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

