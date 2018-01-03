#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp = fopen("nilesh.txt","w");//Here you can make any file type as you wish
	printf("\nInput line you want to enter and press EOF!!:");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("\nOUTPUT:");
	fp = fopen("nilesh.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
