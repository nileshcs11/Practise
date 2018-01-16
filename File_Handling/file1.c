//WAP in C that will accept N integer numbers from user and will store in a file called "data.txt". Then the even numbers and odd numbers will be stored in a file called "even.txt" and "odd.txt" respectively. Display the contents of the files.
#include<stdio.h>
int main()
{
	FILE *f1,*f2,*f3;
	int t,i,n;
	printf("\nEnter how many numbers you want to store:");
	scanf("%d",&n);
	printf("\nCONTENT OF DATA FILE:\n");
	f1 = fopen("data.txt","w");
	for(i=1;i<=n;i++)
	{
		printf("\nENter number:");
		scanf("%d",&t);
		if(t==-1)
		{
			break;
		}
		else{
			fprintf(f1, "%d ", t);
		}
	}
	fclose(f1);
	f2 = fopen("dataodd.txt","w");
	f3 = fopen("dataeven.txt","w");
	f1 = fopen("data.txt","rb");
	while((fscanf(f1,"%d",&t))!=EOF)//read from data file
	{
		if(t%2==0)
			fprintf(f3, "%d ",t);//write to even file
		else
			fprintf(f2, "%d ",t);//write to odd file
	}
	fcloseall();
	f2 = fopen("dataodd.txt","rb");
	f3 = fopen("dataeven.txt","rb");
	printf("\nCONTENT OF ODD FILE:\n");
	while((fscanf(f2,"%d",&t))!=EOF)
	{
		printf("%d\n",t);
	}
	printf("\nCONTENT OF EVEN FILE\n");
	while((fscanf(f3,"%d",&t))!=EOF)
	{
		printf("%d\n",t);
	}
	fcloseall();
	return 0;
}

