#include<iostream>
#include<string>
using namespace std;
int main()
{

	void compare(int *p,int n);
    void compare(float *p,int n);
    void compare(string b[],int n);
	void choose();
		choose();

	return 0;
}
void compare(int *p,int n)
{
	int i,temp,j;
	for(j=0;j<n-1;j++)
	
		
		for(i=j+1;i<n;i++)
		
			if(*(p+i)>*(p+j))      //����̫�ã���Ϊ�������Ѿ��ź����� �Ի������ȥ��Ҫ�ǻ���������ȵ�ð�ݷ����ܽ�����������
			{
				temp=*(p+i);*(p+i)=*(p+j);*(p+j)=temp;
			}
			cout<<"������˳����"<<endl;
			for(i=0;i<n;i++)
				cout<<*(p+i)<<"  "<<endl;
	
}
void compare(string b[],int n)
{
	int i,j;
	string temp;
	for (j=0;j<n-1;j++)
		for(i=j+1;i<n;i++)
			if(b[i]>b[j])
			{
               temp=b[i];b[i]=b[j];b[j]=temp;
			}
	cout<<"������˳����"<<endl;
			for(i=0;i<n;i++)
				cout<<b[i]<<endl;
}
void compare(float *p,int n)
{
	int i,temp,j;
	for(j=0;j<n-1;j++)
	
		
		for(i=j+1;i<n;i++)
		
			if(*(p+i)>*(p+j))      //Ϊɶ�ֵ�С������������������
			{
				temp=*(p+i);*(p+i)=*(p+j);*(p+j)=temp;
			}
			cout<<"������˳����"<<endl;
			for(i=0;i<n;i++)
				cout<<*(p+i)<<endl;
	
}
void choose()
{	int n;
	char leader;
	int*p1=NULL,*p4=NULL;
	float*p2=NULL,*p5=NULL;
	string a[10];int i;
	cout<<"��ѡ��Ҫ�������������"<<endl;
		cout<<"      a.������"<<endl;
		cout<<"      b.�ַ���"<<endl;
		cout<<"      c.ʵ��"<<endl;
		cin>>leader;
		if(leader=='a'||leader=='A')
		{
			cout<<"��������Ҫ��������ָ���"<<endl;
			cin>>n;
			p1=new int[n];
			p4=p1;
			cout<<"����������"<<endl;
			for(i=0;i<n;i++)
				cin>>*(p4+i);
			 compare(p1,n);
                        delete(p1);
		}

	if(leader=='b'||leader=='B')
		{
			cout<<"��������Ҫ������ַ�������"<<endl;
			cin>>n;
		
			cout<<"�������ַ���"<<endl;
	        for(i=0;i<n;i++);       //����Ӧ���Ǿ�û�н��ַ��ͽ�ȥ
		    	cin>>a[i];
             compare(a,n);
	
		
		}

	if(leader=='c'||leader=='C')
		{
			cout<<"��������Ҫ�����ʵ������"<<endl;
			cin>>n;
			p2=new float[n];
			p5=p2;
			cout<<"����������"<<endl;
			for(i=0;i<n;i++)
				cin>>*(p5+i);
			 compare(p2,n);
                        delete(p2);
		}
}