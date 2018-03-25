#include<stdio.h>
int merge_sort(int a[],int low,int high)
{
	int m=0;
	if(low<high)
	{
		m=(low+high)/2;
	}
	merge_sort(a,low,m);
	merge_sort(a,m+1,high);
	merge(a,low,m,high);
	return 0;
}
int merge(int a[],int low,int m,int high)
{
		int a1[50],a2[50],i,j,k,n1,n2;
		n1=m-low+1;
		n2=high-m;//actually its h-(m+1)+1
		for(i=0;i<n1;i++)
		{
			a1[i]=a[low+i];
		}
		for(j=0;j<n2;j++)
		{
			a2[j]=a[m+j+1];
		}
		a1[i]=999999;
		a2[j]=999999;
		for(k=0;k<high;k++)
		{
			if(a1[i]<=a[j])
			{
				a[k]=a1[i++];
			}
			else{
				a[k]=a2[j++];
			}
		}
		return 0;
}
int main()
{
	int a[50], n,i;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element of a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	printf("\nAfter Sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	


	

		


