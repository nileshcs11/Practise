#include<stdio.h>
int top=-1, a[20];
void push(int a[],int n)
{	
	if(top==n-1)
		printf("\nStack FULL!!");
	else
	{
		printf("\nEnter the itm to be pushed:");
		top=top+1;
		scanf("%d",&a[top]);
		printf("Item successfully pushed!!\n");
	}
}
void pop(int a[],int n)
{
	if(top==-1)
		printf("\nNo item to pop from stack!!");
	else
	{
		printf("\nItem %d poped from stack!!",a[top]);
		top=top-1;
	}
}
void Print(int a[],int n)
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int ch,n;
	printf("\nEnter the size of Stack:");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.PRINT\n4.EXIT");
		printf("\nEntger your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(a,n);
				break;
			case 2:pop(a,n);
				break;
			case 3:Print(a,n);
				break;
			case 4:return 0;
			default :printf("\nWrong choice entered");
					break;
		}
	}
}
	
	
	
