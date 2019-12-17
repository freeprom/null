#include <stdio.h>
void main()
{
	int gcd(int u,int v);
	int s,a,b,c;
        printf("please   give   out  two  int  nummber:\n");

	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	s=a*b/c;
	printf("the smalleast  commonisor is: \n %d\n ",c);
	printf("the largeast  common  multiple  is: \n %d\n ",s);
}
int gcd( int u,int v)
{
	int t,r;
	if(v>u)
	{
		t=u;u=v;v=t;
	}
	while((r=u%v)!=0)
	{
		u=v;
		v=r;
	}
	return v;
}