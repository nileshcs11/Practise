#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year for checking:");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("\n %d is leap year!!\n",year);
			}
			else
			{
				printf("\n %d is not leap year!!\n",year);
			}
		}
		else
			printf("\n %d is leap year\n",year);
	}
	else
		printf("\n %d is not leap year!!\n",year);
	return 0;
}	
		
