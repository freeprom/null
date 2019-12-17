#include <stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
int yun(int x,int y);
int chang(int x,int y);
int jardge(int x);
void main () 
{
	struct date date1;
	int i;
	printf("请给出日期:\n");
	scanf("%d",&date1.year);
	scanf("%d",&date1.month);
	scanf("%d",&date1.day);
	if(jardge(date1.year)==1)
	   i=yun(date1.month,date1.day);
	else 
		i=chang(date1.month,date1.day);
	printf("它在那一年中是第%d天\n",i);

}
int jardge(int x)
{
	
	if(x%4==0&&x%100!=0)
		return 1;
	else
		return 0;

}
int yun(int x,int y)
{
	int t;
	switch(x){
case 1: t=y;break;
case 2: t=y+31;break;
case 3: t=y+60;break;
case 4: t=y+91;break;
case 5: t=y+121;break;
case 6: t=y+152;break;
case 7: t=y+182;break;
case 8: t=y+213;break;
case 9: t=y+244;break;
case 10: t=y+274;break;
case 11: t=y+305;break;
case 12: t=y+335;break;}
	return(t);

}
int chang(int x,int y)
{
	int t;
	if (x<3)
		t=yun(x,y);
	else
		t=yun(x,y)-1;
	return(t);
}
