#include <stdio.h>
void main()
{
	int max(int x,int y);
	int a,b,c,e,d;
	scanf("%d,%d,%d",&a,&b,&c);
	d=max(a,b);
	e=max(d,c);
	printf("%d",e);
}
int max(int x,int y)
{
	int z;
		if(x>y)
			z=x;
		else z=y;
		return(z);
}