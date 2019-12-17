#include <stdio.h>
#include <string.h>
void main()
{
	char a[20] ,b[20];
	char *p1 ,*p2;
	p1=a;
	p2=b;
	gets(a);
	gets(b);
	if(strcmp(a,b)>0)
	{
        p1=b;
		p2=a;
	}
	printf("%s,%s",*p1,*p2);
}
