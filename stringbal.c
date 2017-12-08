//Program in C to check wether a string is balance or not from algebric sense
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[20],b[20],c[20];
	int i,c1=0,c2=0,c3=0,k=0,j=0,m;
	printf("\nEnter the String:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='[')
			c1++;
		if(a[i]==']')
			c1--;
		if(a[i]=='{')
			c2++;
		if(a[i]=='}')
			c2--;
		if(a[i]=='(')
			c3++;
		if(a[i]==')')
			c3--;

	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='['||a[i]=='{'||a[i]=='(')
			b[j++]=a[i];
		if(a[i]==']')
			c[k++]='[';
		if(a[i]=='}')
			c[k++]='{';
		if(a[i]==')')
			c[k++]='(';
	}
	c[k]='\0';
	b[j]='\0';
	m=strcmp(b,strrev(c));
	if(c1==0&&c2==0&&c3==0&&m==0)
		printf("\nString is valid from alegebric sense!!");
	else
		printf("\nString is not balanced!!");

	return 0;
}
