#include <stdio.h>
vo
id main()
{
	int weekday(int x,int y,int z);
	int a,b,c,d,e;
	scanf("%d,%d,%d",&a,&b,&c);
	d= weekday(a,b,c);
	e=d%7;
	switch(e)
	{
	case 1:printf("M");break;
    case 2:printf("T");break;
    case 3: printf("W");break;
	case 4: printf("TH");break;
    case 5 :printf("F");break;
    case 6: printf("S");break;
    case 0: printf("sun");break;
	}
}
weekday (int x ,int y,int z)
{
	int c,d,s;
	int fuc1(int x1);
	int fuc2(int x3,int x2);
	c=fuc1(x);
	d=fuc2(x,y);
	s=c+d+z;
	return (s);
}
int fuc1(int x1)
{
	int fuc3(int w);
	int i,a,b,c,d;
	a=0;
	
	for(i=1900;i<x1;i++)
	{
		c= fuc3(i);
		if(c==1)
			a=a+1;
	}
	b=x1-1901-a;
	d=366*a+365*b;
	return (d);

}	
int fuc2(int x3,int x2)
{
	int fuc3(int w);
	int a,d;
	a= fuc3(x3);
	if(a==1)
	{
	switch (x2)
	{
	case 1:d=0;
	case 2:d=31;
	case 3:d=60;break;
	case 4:d=91;break;
	case 5:d=121;break;
	case 6:d=152;break;
	case 7:d=182;break;
	case 8:d=213;break;
	case 9:d=244;break;
	case 10:d=274;break;
	case 11:d=305;break;
	case 12:d=335;break;
	}
	}

    else if(a==0)
	{	
		switch(x2)
		{
    case 1:d=0;break;
	case 2:d=31;break;
	case 3:d=59;break;
	case 4:d=90;break;
	case 5:d=120;break;
	case 6:d=151;break;
	case 7:d=181;break;
	case 8:d=212;break;
	case 9:d=243;break;
	case 10:d=273;break;
	case 11:d=304;break;
	case 12:d=334;break;
	}
	}
	return (d);
}
	int fuc3(int w)
	{
		if(w%4==0&&w/100!=0||w%400==0)
			return(1);
		else
			return(0);
}
	