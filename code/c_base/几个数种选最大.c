#include<iostream>
using namespace std;
int main()
{
	int sel(int x,int y,int z=0);
	int a, b, c;
	cout<<"please give out two nummbers:"<<endl;
	cin>>a>>b;
	cout<<"the bigger one is:"<<sel(a,b)<<endl;
	cout<<"please give out three nummbers:"<<endl;
	cin>>a>>b>>c;
    cout<<"the biggest one is:"<<sel(a,b,c)<<endl;
	return 0;
}
int sel(int x,int y,int z)
{
	if(x<y)
		x=y;
	if(x<z)
		x=z;
	return(x);
}