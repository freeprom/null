#include<iostream>
using namespace std;
int main()
{   void ord(int &x,int &y,int &z);
	int a,b,c;
	cout<<"please give three nummbers:"<<endl;
	cin>>a>>b>>c;
	ord(a,b,c);
	cout<<"the right order is:"<<endl<<a<<" "<<b<<" "<<c<<" "<< endl;
	return 0;

}
void ord(int &x,int &y,int &z)
{  int temp;
if (x<y) {temp=x;x=y;y=temp;}
if (x<z) {temp=x;x=z;z=temp;}
if (y<z) {temp=y;y=z;z=temp;}
   
}