#include<iostream>
using namespace std;
int swap(int &a,int &b);
int main()
{
	int x,y;
	cout<<"enter the two numbers:";
	cin>>x>>y;
	swap(x,y);
	cout<<"after swaping the numbers:"<<endl;
	cout<<"a="<<x<<","<<"b="<<y;
	
}
int swap(int &a,int &b)
{
	int temp;
	cout<<"before swaping:"<<endl;
	cout<<"a="<<a<<","<<"b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	return a,b;
	cout<<"after swaping the numbers:"<<endl;
	cout<<"a="<<a<<","<<"b="<<b;
}
