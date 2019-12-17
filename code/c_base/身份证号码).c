#include <stdio.h>
void main ()
{
	int a[17],i,c,d,s=0;
	int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	printf("17?:\n");
	for(i=0;i<17;i++)
		scanf("%1d",&a[i]);
	for(i=0;i<17;i++)
	{
		c=a[i]*b[i];
    	s=s+c;
	}

	d=s%11;

	switch(d)
	{
	case 0:printf("1\n"); break;
	case 1:printf("0\n"); break;
	case 2:printf("X\n"); break;
        case 3:printf("9\n"); break;
	case 4:printf("8\n"); break;
	case 5:printf("7\n"); break;
        case 6:printf("6\n"); break;
	case 7:printf("5\n"); break;
	case 8:printf("4\n"); break;
	case 9:printf("3\n"); break;
	case 10:printf("2\n"); break;
	}
}


