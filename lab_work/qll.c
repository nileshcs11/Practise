#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct q{
		int data;
		struct q *link;
};
#include<stdlib.h>
#define SIZE 5
struct q{
		int data;
		struct q *link;
};
struct q *front, *rear;
int count=0;
void ins()
{
	struct q *temp;
	if(count==SIZE)
	{
		printf("\nQUEUE FULL!!");
	}
	else
	{
		temp=(struct q *)malloc(sizeof(struct q));
		printf("\nEnter the item to be inserted:");
		scanf("%d",&temp->data);
		if(rear==NULL)
		{
			rear=temp;
			rear=rear->link;
			front=rear;
		}
		else
		{
			rear->link=temp;
			rear=rear->link;
		}
		count=count+1;
	}
}
void del()
{
	struct q *temp;
	if(count==0)
	{
		printf("\nNo item to delete!!");
	}
	else
	{
		temp=(struct q *)malloc(sizeof(struct q));
		temp=front;
		front=front->link;
		free(temp);
		count=count-1;
	}
}
void display()
{
	struct q *temp;
	if(count==0)
	{
		printf("\nNo item to display");
	}
	else
	{

		temp=front;
		printf("\nThe current QUEUE is:");
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: ins();
					break;
			case 2: del();
					break;
			case 3: display();
					break;
			case 4: return 0;
			default: printf("\nWrong choice given");
						break;
		}
	}
}
struct q *front, *rear;
int count=0;
void ins()
{
	struct q *temp;
	if(count==SIZE)
	{
		printf("\nQUEUE FULL!!");
	}
	else
	{
		temp=(struct q *)malloc(sizeof(struct q));
		printf("\nEnter the item to be inserted:");
		scanf("%d",&temp->data);
		if(rear==NULL)
		{
			rear=temp;
			front=rear;
			printf("#### %d ",front->data);
		}
		else
		{
			rear->link=temp;
			rear=rear->link;
		}
		count=count+1;
	}
}
void del()
{
	struct q *temp;
	if(count==0)
	{
		printf("\nNo item to delete!!");
	}
	else
	{
		temp=(struct q *)malloc(sizeof(struct q));
		temp=front;
		front=front->link;
		free(temp);
		count=count-1;
	}
}
void display()
{
	struct q *temp;
	if(count==0)
	{
		printf("\nNo item to display");
	}
	else
	{

		temp=front;
		printf("\nThe current QUEUE is:");
		while(temp!=rear->link)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: ins();
					break;
			case 2: del();
					break;
			case 3: display();
					break;
			case 4: return 0;
			default: printf("\nWrong choice given");
						break;
		}
	}
}
