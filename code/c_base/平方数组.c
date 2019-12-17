#include <stdio.h>
void main()
{
	int i,j,s=0;
	int a[10][10];
	for(i=0;i<10;i++)
	{
		for(j=0,j<10;j++)
			scanf("%d",&a[i][j]);
		s=s+1;
		if(s%10==0)
			printf("\n");
	}
}

