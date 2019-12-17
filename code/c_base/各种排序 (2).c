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
		
			if(*(p+i)>*(p+j))      //程序不太好，因为就算是已经排好序了 仍会进行下去，要是换成两两相比的冒泡法就能解决这个问题了
			{
				temp=*(p+i);*(p+i)=*(p+j);*(p+j)=temp;
			}
			cout<<"排序后的顺序是"<<endl;
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
	cout<<"排序后的顺序是"<<endl;
			for(i=0;i<n;i++)
				cout<<b[i]<<endl;
}
void compare(float *p,int n)
{
	int i,temp,j;
	for(j=0;j<n-1;j++)
	
		
		for(i=j+1;i<n;i++)
		
			if(*(p+i)>*(p+j))      //为啥又得小数点后面的数不出来啊
			{
				temp=*(p+i);*(p+i)=*(p+j);*(p+j)=temp;
			}
			cout<<"排序后的顺序是"<<endl;
			for(i=0;i<n;i++)
				cout<<*(p+i)<<endl;
	
}
void choose()
{	int n;
	char leader;
	int*p1=NULL,*p4=NULL;
	float*p2=NULL,*p5=NULL;
	string a[10];int i;
	cout<<"请选择要排序的数据类型"<<endl;
		cout<<"      a.整形数"<<endl;
		cout<<"      b.字符串"<<endl;
		cout<<"      c.实型"<<endl;
		cin>>leader;
		if(leader=='a'||leader=='A')
		{
			cout<<"请输入需要排序的数字个数"<<endl;
			cin>>n;
			p1=new int[n];
			p4=p1;
			cout<<"请输入数字"<<endl;
			for(i=0;i<n;i++)
				cin>>*(p4+i);
			 compare(p1,n);
                        delete(p1);
		}

	if(leader=='b'||leader=='B')
		{
			cout<<"请输入需要排序的字符串个数"<<endl;
			cin>>n;
		
			cout<<"请输入字符串"<<endl;
	        for(i=0;i<n;i++);       //错误应该是就没有将字符送进去
		    	cin>>a[i];
             compare(a,n);
	
		
		}

	if(leader=='c'||leader=='C')
		{
			cout<<"请输入需要排序的实数个数"<<endl;
			cin>>n;
			p2=new float[n];
			p5=p2;
			cout<<"请输入数字"<<endl;
			for(i=0;i<n;i++)
				cin>>*(p5+i);
			 compare(p2,n);
                        delete(p2);
		}
}