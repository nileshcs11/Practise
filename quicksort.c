#include<stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int partition(int a[],int p,int r)
{
	int i,j,k;
	k=a[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(a[j]<=k)
		{
			i=i+1;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[r], &a[i+1]);
	return (i+1);
}

int hoares_parition(int a[], int p, int r){
    int i = p;
    int j = r + 1;
    do{
        do{
            i++;
        } while(a[i] < a[p] && i < r);
        do{
            j--;
        } while(a[j] > a[p]);
        if(i < j)
            swap(&a[i], &a[j]);
    } while(i < j);
    swap(&a[p], &a[j]);
    return j;
}

typedef int(*part)(int[], int, int);

void quicksort(int a[],int p,int r, part prt)
{
	int q;
	if(p<r)
	{
		q=prt(a,p,r);
		quicksort(a,p,q-1, prt);
		quicksort(a,q+1,r, prt);
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

	part prt = partition;
	printf("\nPress y to use Hoare's partition method : ");
	char ch;
	scanf(" %c", &ch);
	if(ch == 'y' || ch == 'Y')
	    prt = hoares_parition;

	quicksort(a,p,r,prt);
	
	printf("\nAfter Sorting:");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

