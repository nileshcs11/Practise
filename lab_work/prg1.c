#include<stdio.h>
int main()
{
	int n,i,j,p,ch;
    	printf("\nEnter the number :");
    	scanf("%d",&n);
    	printf("\nPrime factors of %d are: ",n);
    	for(i=n;i>=2;i--)
    	{
    		if(n%i==0)
    		{
    			p=1;
    			for(j=i/2;j>=2;j--)
    			{
    				if(i%j==0)
    				{
    					p=0;
    					break;
    				}
    			}
    			if(p==1)
    			{
    				printf(" %d ",i);
    			}		  
    		}
    	}
	
	return 0;
	
}
