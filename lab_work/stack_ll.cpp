#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct stack{
	int data;
	struct stack *link;
};
struct stack *top;
int count=0;
void push()
{
	struct stack *temp;
	if(count==SIZE)
	{
		printf("\n\t\t\tStack FULL!!");
		
	}
	else{
		temp=(struct stack *)malloc(sizeof(struct stack));
		printf("\n\t\t\tEnter the item to be pushed:");
		scanf("%d",&temp->data);
		printf("\n\t\t\tITEM PUSHED SUCCESSFULLY!!");
		temp->link=top;
		top=temp;
		count=count+1;
	}
}
void display()
{
	struct stack *temp;
	temp=top;
	if(top==NULL)
	{
		printf("\n\t\t\tSTACK EMPTY!!");
	}
	while(temp!=NULL)
	{
		printf("\t\t\t\t\t%d\n",temp->data);
		temp=temp->link;
	}
}
void pop()
{
	struct stack *temp;
	if(top==NULL)
	{
		printf("\n\t\t\tSTACK EMPTY!!NO ITEM TO POP!!");
	}
	else
	{
		temp=top;
		top=temp->link;
		free(temp);
		count=count-1;
		printf("\n\t\t\tITEM POPED SUCCESSFULLY!!");
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
					break;
			case 2:pop();
					break;
			case 3:display();
					break;
			case 4:return 0;
			default:printf("\n\t\t\tWrong choice entered!!");
					break;
														
		}
	}
}
