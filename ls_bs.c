#include<stdio.h>
void ls(int a[],int n)
{
	int item,i,flag=0;
	printf("\nEnter the item to be searched:");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\nItem found at position %d !!",i+1);
	else
		printf("\nItem not found!!");
}
void bs(int a[], int n)
{
	int j,i,temp,item,mid,pos,flag=0,l=0,u=n;
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAfter sorting:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nEnter the item to be searched:");
	scanf("%d",&item);
	while(l<u)
	{
		mid=(l+u)/2;
		if(a[mid]==item)
		{
			flag=1;
			pos=mid+1;
			break;
		}
		else
		{
			if(item>a[mid])
				l=mid+1;
			else
				u=mid-1;
		}
	}
	if(flag==0)
		printf("\nItem not found!!");
	else
		printf("\nItem found at position %d",pos);
}	
int main()
{
	int ch,a[20],n,i;
	printf("\nEnter the number of elements in array:");
	scanf("%d",&n);
	printf("\nEnter the elements of array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(1)
	{

		printf("\n1.LINEAR SEARCH\n2.BINARY SEARCH\n3.EXIT");
		printf("\nEnter your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:ls(a,n);
				break;
			case 2:bs(a,n);
				break;
			case 3:return 0;	
			default:printf("\nWrong Choice Entered!!");
				break;
		}
	}
	
}

	

