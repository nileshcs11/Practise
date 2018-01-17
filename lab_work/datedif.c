#include<stdio.h>
#include<math.h>
int dater(int);
int main()
{
	int dd1,mm1,yy1,dd2,mm2,yy2,day1,day2,ref,i;
	printf("\nEnter the first date(DD/MM/YYY format):");
	scanf("%d%d%d",&dd1,&mm1,&yy1);
	printf("\nEnter the second date:");
	scanf("%d%d%d",&dd2,&mm2,&yy2);
	ref=yy1;
	if(yy2<yy1)
		ref=yy2;
	day1=0;
	day1=dater(mm1);
	for(i=ref;i<yy1;i++)
	{
		if(i%4==0)
			day1=day1+1;
	}
	day1=day1+dd1+(yy1-ref)*365;
	day2=0;
	day2=dater(mm2);
	for(i=ref;i<yy2;i++)
	{
		if(i%4==0)
			day2=day2+1;
	}
	day2=day2+dd2+(yy2-ref)*365;
	printf("\nDifference between two dates= %d days\n",abs(day2-day1));
	return 0;
}
int dater(int x)
{
	int y=0;
	switch(x)
	{
		case 1: y=0;
			break;
		case 2:	y=31;
			break;
		case 3:	y=59;
			break;
		case 4:	y=90;
			break;
		case 5:	y=120;
			break;
		case 6:	y=151;
			break;
		case 7:	y=181;
			break;
		case 8:	y=212;
			break;
		case 9:	y=243;
			break;
		case 10:y=273;
			break;
		case 11:y=304;
			break;
		case 12:y=334;
			break;
		default:printf("\nInvalid Input!!\n");
	}
	return(y);
}
