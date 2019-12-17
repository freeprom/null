#include<stdio.h>
void main()
{
	
	char a[4][7];
	int i,j;
	for(i=0;i<4;i++)
	{
	  for(j=0;j<=2*i;j++)
	  a[i][j]='*';
	}
	for(i=0;i<4;i++)
	{
		for(j=2;j>=i;j--)
			printf(" ");
		for(j=0;j<=2*i;j++)
			printf("%c",a[i][j]);
		printf("\n");
}
	printf("\n");
}