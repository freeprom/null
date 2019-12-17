#include <stdio.h>
void main()
{
	int a,n,i;
	for(i=2;i<=1000;i++)
	{a=0;
      for(n=1;n<=i-1;n++)
	  {
		  if(i%n!=0)
	          continue;
		   a=a+n;
           }
			if(a==i)
			printf("%d",i);
		  
	  
	}


		
	
	printf("\n");
}