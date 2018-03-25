#include<stdio.h>
#include<stdlib.h>
struct sll{
	int data;
	struct sll *link;
};
struct sll *insbeg(struct sll *ptr)
{
	int item;
	struct sll *temp;
	temp=(struct sll *)malloc(sizeof(struct sll));
	else{
		printf("\nEnter the item to be inserted:");
		scanf("%d",&item);
		temp->data=item;
		temp->link=ptr;	
		ptr=temp;
		printf("\nItem Inserted!!\n");
	
}
struct sll *insend(struct sll *ptr)
{
	int item;
	struct sll *temp,*temp1;
	temp=(struct sll *)malloc(sizeof(struct sll));
	temp1=(struct sll *)malloc(sizeof(struct sll));
	temp->data=item;
	temp->link=NULL;
	if(ptr==NULL)
	{
		ptr=temp;
	}
	else{
		temp1=ptr;
		while(temp->link!=NULL)
		{
			temp1=temp->link;
		}
		temp1->link=temp;
	}
	return ptr;
}

void display(struct sll *ptr)
{
	struct sll *temp;
	printf("***%d",ptr->data);
	if(ptr==NULL)
	{
		printf("\nNo item to display!!\n");
	}
	else{
		temp=ptr;
		printf("\nThe items in the list are:");
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	int ch;
	struct sll *HEAD=NULL;
	while(1)
	{
		printf("\n1.Insert at Beginning\n2.Insert at end\n3.Insert at any position\n4.Delete at Beginning\n5.Delete at End\n6.Delete from any position\n7.Searching an Item\n8.Display\n9.Exit");
		printf("\nEnter your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insbeg(HEAD);
					break;
			case 2:insend(HEAD);
					break;       
			case 8:display(HEAD);
					break;	
			case 9:return 0;
			default:printf("\nWrong choice Entered!!");			
		}
	}
	
}
