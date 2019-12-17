#include <stdio.h>
#include <string.h>
struct leader
{
	char name[20];
	int score;
	
};
void main()
{
	struct leader leader1[3];
	char a[20];
	int i;
	for(i=0;i<3;i++)
		leader1[i].score=0;
	strcpy(leader1[0].name,"li");
	strcpy(leader1[1].name,"zhang");
	strcpy(leader1[2].name,"wang");
	for(;1;)
	{
		scanf("%s",a);
	if (strcmp(a,"-1")==0)
		break;
	else
		for(i=0;i<3;i++)
		if (strcmp(leader1[i].name,a)==0)
			{
				leader1[i].score+=1;
				break;}
		
	
}
	printf("zhang  wang  li\n");
	for (i=0;i<3;i++)
		printf("%d      ",leader1[i].score);
}