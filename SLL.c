#include<stdlib.h>  
#include<stdio.h>
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search();
struct node
{
        int data;
        struct node *link;
};
struct node *start=NULL;
int main()      
{
        int ch;
        while(1){
                printf("\n1.Display\n2.Insert at Beginning\n3.Insert at end\n4.Insert at any position\n5.Delete at Beginning\n6.Delete at End\n7.Delete from any position\n8.Searching an Item\n9.Exit");
				printf("\nEnter your choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                        display();
                                        break;
                        case 2: 
                                        insert_begin();
                                        break;
                        case 3:
                                        insert_end();
                                        break;
                        case 4:
                                        insert_pos();
                                        break;
                        case 5:
                                        delete_begin();
                                        break;
                        case 6:
                                        delete_end();
                                        break;
                        case 7:
                                        delete_pos();
                                        break;
                        case 8:
                                        search();
                                        break;
                        case 9:			exit(0);
										break;              
                        default:
                                        printf("\n Wrong choice:\n");
                                        break;
                }
        }
        return 0;
}

void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty!!");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:");
                while(ptr!=NULL)
                {
                        printf("%d ",ptr->data );
                        ptr=ptr->link ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nMemory allocation unsuccessfull:\n");
        }
        printf("\nEnter the item to be inserted:" );
        scanf("%d",&temp->data);
        temp->link =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->link=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nMemory allocation unsuccessfull!!");  
        }
        printf("\nEnter the item to be inserted:\t" );
        scanf("%d",&temp->data );
        temp->link =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->link !=NULL)
                {
                        ptr=ptr->link ;
                }
                ptr->link =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nMemory allocation unsuccessfull!!");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&temp->data) ;
 
        temp->link=NULL;
        if(pos==0)
        {
                temp->link=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++)
                {
                        ptr=ptr->link;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found!!");
                                return;
                        }
                }
                temp->link =ptr->link ;
                ptr->link=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty!!");
                return;
        }
        else
        {
                ptr=start;
                start=start->link ;
                printf("\nThe deleted element is :%d",ptr->data);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->link ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->data);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->link!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->link;
                }
                temp->link=NULL;
                printf("\nThe deleted element is:%d\t",ptr->data);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty!!");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->link ;
                        printf("\nThe deleted element is:%d",ptr->data  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++)
                        {
                                temp=ptr;
                                ptr=ptr->link ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found!!");
                                        return;
                                }
                        }
                        temp->link =ptr->link ;
                        printf("\nThe deleted element is:%d",ptr->data );
                        free(ptr);
                }
        }
}
void search()
{
	int item,count=1,flag=0;
	struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty!!");
                return;
        }
        else
        {
        	printf("\nEnter the item to be searched:");
			scanf("%d",&item);
            ptr=start;
            while(ptr!=NULL)
            {
                if(ptr->data==item) 
                {
                	flag=1;
                	break;
				}
				else{
						ptr=ptr->link;
						count=count+1;
					}	  
            }
            if(flag==1)
            {
            	 printf("\nItem found at position %d !!",count);
			}
            else
			{
                	printf("\nItem not found!!");
				}	
        }
	
}
