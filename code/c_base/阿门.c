#include <stdio.h>
#include <stdlib.h>
int max(int x,int y)
{
	if(x>y)
		return x;
    else
	    return y;
	
}
int main()
{
	int a,b,c;
	system("cls");
	printf("input two integers:\n");
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("max=%d\n",c);
	system("pause");
	return 0;
}
