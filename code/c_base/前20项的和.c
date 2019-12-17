#include <stdio.h>
void main()
{
	float a,b,c,d,s,i;
	a=2,b=3,c=1,d=2,s=0;
	for (i=1;i<=10;i++)
	{
		s=a/c+b/d;
		a=a+b,b=b+a;
		c=c+d,d=d+c;
	}
	printf("%f",s);
}

