#include <stdio.h>
#include<string.h>
int main(void) 
{
	char b[100];
	int l,i,c=0;
	scanf("%[^\t\n]s",&b);
	l=strlen(b);
	for(i=0;i<=l;i++)
	{
	if(b[i]==' ')
	{
	c++;
	}
	}
	printf("%d",c);
	return 0;
	
}
