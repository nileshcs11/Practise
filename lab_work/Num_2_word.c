//WAP in C to convert a decimal number into word.
#include<stdio.h>
#include<math.h>
int main()
{
	char *f[]={"Zero","One","Two","Three","Four","Five","Six","Seven","eight","nine"};
	char *c[]={"Ten","Twenty","Thirty","Forty","fifty","sixty","seventy","Eighty","ninety"};
	char *d[]={"One hundred","two hundred","three hundred","four hundred","five hundred"
		,"six hundred","seven hundred","eight hundred","nine hundred"};
	int b1,d1,e1,f1,c1=0;
	long int a,t,t1;
	printf("\nENTER THE NUMBER:");
	scanf("%ld",&a);
	t=a;
	while(t>0)
	{
		c1++;
		t=t/10;	
	}
	if(c1==1)
	{
		printf("\n%s",f[a]);
	}
	if(c1==2)
	{
		if(a==11)
			printf("\nEleven");
		if(a==12)
			printf("\ntwelve");
		if(a==13)
			printf("\nthirteen");
		if(a==14)
			printf("\nfourteen");
		if(a==15)
			printf("\nfifteen");
		if(a==16)
			printf("\nsixteen");
		if(a==17)
			printf("\nseventeen");
		if(a==18)
			printf("\nEighteen");
		if(a==19)
			printf("\nnineteen");
		else
		{
			t=a;
			b1=t%10;
			t=t/10;
			if(b1!=0)
				printf("\n%s %s",c[t-1],f[b1]);
			else{
				printf("\n%s ",c[t-1]);
			}
		}
	}
		if(c1==3)
		{
			t=a;
			d1=t%10;
			t=t/10;
			b1=t%10;
			t=t/10;
			t1=a;
			t1=t1%100;
			if(t1==11)
				printf("\n%s eleven",d[t-1]);
				else if(t1==12)
					printf("\n%s twelve",d[t-1]);
					
				else if(t1==13)
					printf("\n%s thirteen",d[t-1]);
				else if(t1==14)
					printf("\n%s fourteen",d[t-1]);
				else if(t1==15)
					printf("\n%s fifteen",d[t-1]);
				else if(t1==16)
					printf("\n%s sixteen",d[t-1]);
				else if(t1==17)
					printf("\n%s seventeen",d[t-1]);
				else if(t1==18)
					printf("\n%s eighteen",d[t-1]);
				else if(t1==19)
					printf("\n%s nineteen ",d[t-1]);
			     	else
				{
					if(d1!=0)
					{
						if(b1!=0)
							printf("\n%s %s %s",d[t-1],c[b1-1],f[d1]);
						else
							printf("\n%s %s",d[t-1],f[d1]);
					}
					else
					{
						if(b1!=0)
							printf("\n%s %s",d[t-1],c[b1-1] );
						else
							printf("\n%s ",d[t-1]);
			
					}
				}		
			
		}



}



