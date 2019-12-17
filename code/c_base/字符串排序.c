#include <stdio.h>
#include <malloc.h>
#include <string.h>
void main()
{
	char *p[10];
	int i;
	for(i=0;i<10;i++)
	{p[i]=(char *)malloc(10*sizeof(char));
	scanf("%s",p[i]);}
	
	void gen(char *p[],int n);
	gen(p,10);
	for(i=0;i<10;i++)
	{printf("%s\n",p[i]);
	free(p[i]);}

}
void gen(char *p[],int n)
{
	char a[10];
	char *pt;
	int i,t;
	for (i=0;i<n;i++)
	{if(strcmp(p[i],p[n-1])>0)
	{pt=p[n-1];
	p[n-1]=p[i];
	p[i]=pt;}}
	if(n>=2)
		gen(p,n-1);

	}
