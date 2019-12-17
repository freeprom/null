#include <stdio.h>
 
int a[100]; int k; int n;
void main()
{void gan(int x,int y, int z);
   int i,j=1,t,m;
   printf("请给出特殊号码\n");
	scanf("%d",&k);
   printf("请给出人数\n");
	   scanf("%d",&n);
	for(i=1;i<=n;i++)
		a[i]=i;

		gan(1,n,n);
		printf("最后留下来的号码是\n");
			printf("%d\n\n",a[1]);
}
void gan(int x,int y,int z)
{

	int i,j=1,l,t,m;
	for(i=x,l=1;i<=y,l<=z;i++,l++)
		if(i%k!=0)
		{
			a[j]=a[l];
			j++;
		}
		else 
			printf("%d ",a[l]);
		t=y+1;
		m=y+j-1;
		if (j>1)
		gan(t,m,j-1);

}

