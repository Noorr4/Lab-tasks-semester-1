#include<iostream>
using namespace std;
int cube(int &x);
int main()
{
	int a,c;
	for(int i=0;i>0;i++)
	{
		cout<<"enter the number:";
		cin>>a;
		c=cube(a);
		cout<<"cube is="<<c;
	}
}
	int cube(int &x)
	{
		int c;
		c=x*x*x;
		return c;
	}
	

