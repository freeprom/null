#include<stdio.h>

void main()
{
	int i,j,n,b=0;
	int a[10][10];
	printf("please give the lengh under 10\n:");
	scanf("%d",&n);
	printf("\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				if(j==(n-1))
					printf("\n");
			}
                


		}
}
