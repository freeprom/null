#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
	char ch,ch1;
	FILE *fp,a;
 if(fp=fopen("file1.txt","w+")==NULL)
 {
	 printf("cannot open this file\n");
	 exit(0);
 }
 ch=getchar();
 while(ch!='#')
 {
	 fputc(ch,fp);
	 fgetc(fp)
	 ch=getchar();
 }
 rewind(fp);
if ((a=fopen("file2.txt","w+")==NULL)
{
	printf("cant open this file\n");
	exit(0);
}while(!feof(fp))
{ch1=fgetchar(fp);
fgetc(copper(ch1),a);
fputc(a);

}
fclose(fp);
fclose(a);

}