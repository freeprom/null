#include <stdio.h>
#include <string.h>
void main()
{
	char a[10],b[10], c[10];
	gets(a);
	gets(b);
	gets(c);
	void swap(char *p1,char *p2);
	if(strcmp(a,b)>0) swap(a,b);
	if(strcmp(a,c)>0) swap(a,c);
	if(strcmp(b,c)>0) swap(b,c);
	
	printf("%s %s %s",a,b,c);
	printf("\n");
}
void swap(char *p1,char *p2)
{
	char temp[10];
	strcpy(temp,p1);
	strcmp(p1,p2);
	strcmp(p2,temp);
	


}