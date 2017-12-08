#include<stdio.h>

struct asc{
		int dd;
		int mm;
		int yy;
	  };

int main()
{	
	
	struct asc dmt[20],temp[20],temp1[20],temp2[20];
	int n,i,j,m=0;
	printf("\nEnter the no. of dates you wanna compare:");
	scanf("%d",&n);
	label:
	printf("\nEnter in DATE/MONTH/YEAR format:");
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&dmt[i].dd,&dmt[i].mm,&dmt[i].yy);
	}
	printf("\nDates given by user:");
	for(i=0;i<n;i++)
	{
		printf("%d /%d /%d\n",dmt[i].dd,dmt[i].mm,dmt[i].yy);
	}
	for(i=0;i<n;i++)
	{
		if(dmt[i].yy==dmt[i+1].yy&&dmt[i].mm==dmt[i+1].mm&&dmt[i].dd==dmt[i+1].dd)
		{
			printf("\nAll dates are same!!");
			m=m+1;
		}
		if(m==n-1)
		{
			goto label;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(dmt[i].yy>dmt[j].yy)
					{
					temp[i]=dmt[i];
					dmt[i]=dmt[j];
					dmt[j]=temp[i];
					}
					else
					{
						if(dmt[i].yy==dmt[j].yy)
						{
							if(dmt[i].mm>dmt[j].mm)
							{
							temp1[i]=dmt[i];
							dmt[i]=dmt[j];
							dmt[j]=temp1[i];
							}
							else
							{
								if(dmt[i].mm==dmt[j].mm)
								{
									if(dmt[i].dd>dmt[j].dd)
									{
									temp2[i]=dmt[i];
									dmt[i]=dmt[j];
									dmt[j]=temp2[i];
									}
								}
							}
						}
					}
				}
			}
			printf("\nThe Dates in ascending order are:");
			for(i=0;i<n;i++)
			{
				printf("%d/%d/%d\n",dmt[i].dd,dmt[i].mm,dmt[i].yy);
			}
		}
	}
	return 0;
}
