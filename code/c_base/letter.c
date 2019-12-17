#include<stdio.h>
#include<stdlib.h>
void PUT(FILE *fP1);
int staw(FILE *fp2);
int stas(FILE *fp3);
void main()
{
	FILE *fp;
	if((fp=fopen("letter.txt","r+"))==NULL)
	{
		printf("cant open this file\n");
		exit(0);
	}
	int now,nos;
	 PUT(fp);
	now=staw(fp);
	nos=stas(fp);
	fclose(fp);
	printf("the mummber of the word is :%d\n",now);
    printf("the mummber of the sentens is :%d\n",nos);

}
void PUT(FILE *fp1)
{
	char ch;
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp1);
		ch=getchar();
	}
}