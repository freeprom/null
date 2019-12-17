#include <stdio.h>
void main()
{
	void change(int c[10][10],int a, int b);
	int a[10][10],i,j,n,m;
	printf("please give out the lengh and the width\n");
	scanf("%d%d",&m,&n);
	printf("please give out the numbers \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		
	}	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)printf("%5d",a[i][j]);
		printf("\n");
	}
	change(a,m,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\n");

}
void change(int c[10][10],int a,int b)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		
			c[j][i]=c[i][j];
			
	}
}