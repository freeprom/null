#include <stdio.h>
void main()
{
	void change1(int *);
	void change2(int *);
	int a[10],i;
	int *p;
	p=a;
	for(i=0;i<10;i++)
	scanf("%d",p+i);
	change1(a);
	change2(a);
	for(i=0;i<10;i++)
		printf("%d",*(p+i));

	
	
}
void change1(int a[])
{
	int i;int t;
	int *max;
	max=a+9;
	for(i=0;i<9;i++)
		if(*(a+i)>*max)
			max=a+i;
		if(max!=a+9)
		{
			t=a[9];
			a[9]=*max;
			*max=t;
			
		}


}
void change2(int a[])
{
	int i;int t;
	int *min;
	min=a;
	for(i=1;i<10;i++)
		if(*(a+i)<*min)
			min=a+i;
		if(min!=a)
		{
			t=a[0];
			a[0]=*min;
			*min=t;
			
		}


}