#include <stdio.h>
 
int a[100]; int k; int n;
void main()
{void search(int *p,int y, int z);
   int i;
   printf("������������\n");
	scanf("%d",&k);
   printf("���������\n");
	   scanf("%d",&n);
	for(i=1;i<=n;i++)
		a[i]=i;

		search(a+1,1,n);
		printf("����������ĺ�����\n");
			printf("%d\n\n",a[1]);
}
void search(int *p,int x,int y)
{

	int i,j;
	int *p1;
	while(*(p+1)!=0)
	{j=0;
	for(i=x,p1=p;i<=y;i++,p1++)
	{	if(i%k!=0)
		{
	*(p+j)=*p1;
			j++;
		}
		else 
			printf("%d ",*p1);}
	
		x=y+1;
		y=y+j;}
	printf("\n");
		
}

