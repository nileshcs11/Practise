#include<stdio.h>
#include<stdlib.h>
typedef struct tnode
{
    int data;
    struct tnode *right,*left;
}TNODE;
 
TNODE *CreateBST(TNODE *, int);
void Inorder(TNODE *);
void Preorder(TNODE *);
void Postorder(TNODE *);
TNODE *Delete(TNODE *,int);
TNODE *minvaluenode(TNODE *);
int main()
{
    TNODE *root=NULL;	
    int ch,elem,n,i;
    do
    {
        printf("\n1-Creation of BST");
        printf("\n2-Traverse in Inorder");
        printf("\n3-Traverse in Preorder");
        printf("\n4-Traverse in Postorder");
	printf("\n5-Delete an Element");
        printf("\n6-Exit\n");
	printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: root=NULL;
            printf("\n\nBST for How Many Nodes ?:");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                printf("\nEnter the Data for Node %d: ",i);
                scanf("%d",&elem);
                root=CreateBST(root,elem);
            }
            printf("\nBST with %d nodes is ready to Use!!\n",n);
            break;
        case 2:Inorder(root); 
		break;
        case 3:Preorder(root);
		break;
        case 4:Postorder(root); 
		break;
	case 5:printf("\nEnter the node to be deleted:");
		scanf("%d",&elem);
		Delete(root,elem); 
		break;
        case 6: printf("\n\n Terminating \n\n");
		 break;
        default: printf("\n\nInvalid Option !!! Try Again !! \n\n");
           	 break;
        }
    }while(ch != 6);
}
TNODE *CreateBST(TNODE *root, int elem)
{
    if(root == NULL)
    {
        root=(TNODE *)malloc(sizeof(TNODE));
        root->left= root->right = NULL;
        root->data=elem;
        return root;
    }
    else
    {
        if( elem < root->data )
            root->left=CreateBST(root->left,elem);
        else
            if( elem > root->data )
                root->right=CreateBST(root->right,elem);
            else
                printf(" Duplicate Element !! Not Allowed !!!");
 
        return(root);
    }
}
void Inorder(TNODE *root)
{
    if( root != NULL)
    {
        Inorder(root->left);
        printf(" %d ",root->data);
        Inorder(root->right);
    }
   
}
 
void Preorder(TNODE *root)
{
    if( root != NULL)
    {
        printf(" %d ",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
   
}
 
void Postorder(TNODE *root)
{
    if( root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf(" %d ",root->data);
    }
    
}
TNODE * minvaluenode(TNODE * node)
{
	TNODE * current = node;
	while(current->left != NULL)
	{
		current = current->left;
	}
	return current;
}
TNODE *Delete(TNODE *root, int elem)
{
	if(root == NULL) return root;
	if(elem < root->data)
		root -> left = Delete(root->left,elem);
	else if(elem > root->data)
		root->right = Delete(root->right,elem);
	else
	{
		if(root->left == NULL)
		{
			TNODE * temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL)
		{
			TNODE * temp = root->right;
			free(root);
			return temp;
		}
		TNODE * temp = minvaluenode(root->right);
		root->data = temp->data;
		root->right = Delete(root->right, temp->data);
		root->data = temp->data;
		root->right = Delete(root->right, temp->data);
	}
	return root;
}
				
