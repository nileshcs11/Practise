//Program in C to check the validity of date!
#include<stdio.h>
int main()
{
	char ch;
	do{
		int dd,mm,yy;
		printf("\nEnter date(DD/MM/YYYY):");
		scanf("%d%d%d",&dd,&mm,&yy);
	//Checking for year validity
		if(yy>=1900 && yy<=9999)
		{
			//check for month validity
			if(mm>=1 && mm<=12)
			{
				//check for validity of date
				if((dd>=1 &&dd<=31) && (mm==1 ||mm==3||mm==5||mm==7||mm==8||mm==12||mm==10))
				{
					printf("\nDate Valid!!\n");
				}
				else if((dd>=1 &&dd<=30)&& (mm==4||mm==6||mm==9||mm==11))
				{
					printf("\nDate is valid!!\n");
				}
				else if((dd>=1&&dd<=28) && (mm==2))
				{
					printf("\nDate is Valid!!\n");
				}
				else if(dd==29 && mm==2 && ((yy%400==0) || (yy%4==0) && (yy%100!=0)))
				{
					printf("\nDate is Valid!!\n");
				}
				else
				{
					printf("\nDay is Invalid!!\n");
				}
			}
			else
			{
				printf("\nMonth is Invalid!!\n");
			}
		}
		else
		{
			printf("\nYear is Invalid!!");
		}
		printf("\nDo you want to continue?(Y/N)!!");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');
		return 0;
}	


