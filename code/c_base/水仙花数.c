#include <stdio.h>
void main()
{
	int a,b,c,i;
	for(i=100;i<=999;i++)
	{
        a=i/100;
		b=(i/10)%10;
		c=i%10;
	//	if(i==a*a*a+b*b*b+c*c*c)
		if(i!=a*a*a+b*b*b+c*c*c)
			continue;
	   printf("%d ",i);

		
	}
	printf("\n");
}