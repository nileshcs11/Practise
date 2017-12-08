#include<stdio.h>
int a[20],n,rear=-1,front=-1;
int ins(int a[], int n)
{
    int item;
    if(rear==n-1)
    {
        printf("\nQueue full!!");
    }
    else
    {
        printf("\nEnter the item to be inserted:");
        scanf("%d",&item);
        if(rear==-1)
        {
            rear=rear+1;
            a[rear]=item;
            front=front+1;
        }
        else
        {
            rear=rear+1;
            a[rear]=item;
        }
    }


}
int del(int a[], int n)
{
    if(front==rear)
    {
        printf("\nNO ITEM TO DELETE !!\n");
    }
    else
    {
       printf("\nItem deleted from front!!");
        front=front+1;
    }

}
int display(int a[], int n)
{
    int i;
    printf("\nCurrent queue is:");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int i,ch;
    printf("\nEnter the size of queue:");
    scanf("%d",&n);
    while(1)
    {
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
		{
			case 1: ins(a,n);
					break;
			case 2: del(a,n);
					break;
			case 3: display(a,n);
					break;
			case 4: return 0;
			default: printf("\nWrong choice given");
						break;
		}
    }
}
