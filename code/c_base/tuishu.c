#include <stdio.h>
void main()
{   void exchange (int *p1,int x,int y);
	int a[100],m,n,*p;
	printf ("���������ֵĸ������뽻���ĸ���\n");
    scanf ("%d %d",&m,&n);
	printf("����������");
	for (p=a;p<a+n;p++)
		scanf("%d",p);
exchange (a,n,m);
for (p=a;p<a+n;p++)
printf("%d",*p);	
}
void exchange(int *p1,int x,int y)
{
	int b[100],*p2,*p3;
	
	for(p3=b,p2=p1+x-y;p2<=p1+x-1;p2++,p3++)
		*p3=*p2;
	for(p2=p1+x-y-1;p2>=p1;p2--)
		*(p2+y)=*p2;
	for (p2=p1,p3=b;p2<p1+x-y;p2++,p3++)
		*p2=*p3;

}